#include<iostream>
using namespace std;

int len(int a);
int main()
{
    int A,B;
	while(cin>>A>>B){
		int a,b;
		
		if(A>B){
			a = B;
		    b = A;
		}
		    
		else{
			a = A;
		    b = B;
		}
		    
		    
    	int max = 0;
    	for (int i = a;i<=b;i++){
    		if(len(i)>max)
    		    max = len(i);
		}
		
		cout<<A<<" "<<B<<" "<<max<<"\n";
    	
    	
	}

    return 0;
}

int len(int a){
	int len=0;
	int b=a;
	while (b>1){
		
		if (b%2==0)
		    b /= 2;
		else 
		    b = (3*b+1);
		len++;
		
		
	}
	len++;
	return len;
}
