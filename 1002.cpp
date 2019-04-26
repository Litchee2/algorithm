#include <iostream>
#include <string>
#define MAX 1005
using namespace std;
int main(){
	string a;
	string b;
	int lenA;
	int lenB;
	int numA[MAX];
	int numB[MAX];
	int sum[MAX];
	int jw=0;
	int n;
	
	while(cin>>n){
		for(int i=1;i<=n;i++){
			cin>>a>>b;
			lenA=a.length();
			lenB=b.length();
			//初始化
		for(int i=0;i<MAX;i++){
			numA[i]=0;
			numB[i]=0;
			sum[i]=0;
		} 
		//读入a,b
		for(int i=0;i<lenA;i++){
			numA[MAX-lenA+i]=a[i]-48;
		} 
		for(int i=0;i<lenB;i++){
			numB[MAX-lenB+i]=b[i]-48;
		}

		//相加从MAX-1位开始
		int jw=0;
		for(int i=MAX-1;i>0;i--){
			
			sum[i]=(numA[i]+numB[i]+jw)%10;
			jw=((numA[i]+numB[i]+jw)/10);
		}
		
		cout<<"Case "<<i<<":"<<endl;
		cout<<a<<"+ "<<b<<" = ";
		int tag=0;
		for(int i=0;i<MAX;i++){
			if(!sum[i]){
				tag=i;
			}
			else{
				break;
			}
			
		}
	    //cout<<tag<<"test2"<<sum[MAX-1]<<endl;
		//cout<<numA[MAX-1]<<"TEST";
		for(int i=tag+1;i<MAX;i++){
			cout<<sum[i];
		}
		cout<<endl;
	    cout<<endl;
			
						
		}
		break;
		
	}
	return 0;
	
	
}
