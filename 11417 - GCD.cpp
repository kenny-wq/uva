#include<iostream>
using namespace std;

int GCD(int a,int b);
int main(){
	int n;
	while(cin>>n,n!=0){
		int G=0;
        for(int i=1;i<n;i++){
        	for(int j=i+1;j<=n;j++){
                G+=GCD(i,j);
            }
		}
        cout<<G<<"\n";
	}
}

int GCD(int a,int b){
	int r=1;
	while(r!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
