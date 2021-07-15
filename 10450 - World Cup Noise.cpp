#include<iostream>
using namespace std;

int f(int a);
int main(){
	int n;
	
	while(cin>>n){
		int a[n+1];
		long long f[60];
	
	    for(int i=1;i<n+1;i++){
		    cin>>a[i];
	    }
	    for(int i=1;i<60;i++){
	    	if(i==1)
	    	    f[i]=2;
	    	else if(i==2)
	    	    f[i]=3;
	    	else
	    	    f[i]=f[i-1]+f[i-2];
		}
	    for(int i=1;i<n+1;i++){
		    cout<<"Scenario #"<<i<<":\n"<<f[a[i]]<<"\n\n";
	    }
	}
	
	
}
int f(int a){
		if (a==1)
		    return 2;
		else if (a==2)
		    return 3;
		else 
		    return f(a-1)+f(a-2);
	}
