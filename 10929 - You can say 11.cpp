#include<iostream>

using namespace std;

int len(char a[],int n){
	int len=0;
	for (int i=0;a[i]!='\0';i++)
	    len++;
	return len;
}

int main(){
	char number[1002];
	
	while(cin>>number){
		if (number[0]=='0'&&number[1]=='\0')
		    break;
		int a=0;
		int b=0;
		for (int i=0;i<len(number,1002);i++){
			if(i%2==0)
			    a+=(number[i]-'0');
			else
			    b+=(number[i]-'0');
			
		}
		
		if((a-b)%11==0)
		    cout<<number<<" is a multiple of 11.\n";
		else
		    cout<<number<<" is not a multiple of 11.\n";
	}
	return 0;
}


