#include<iostream>
using namespace std;

int g(int a);
int f(int a);

int main(){
	int n;
	while(cin>>n&&n!=0){
		cout<<g(n)<<"\n";
	}
}

int g(int a){
	if (a<10)
	    return a;
	else
	    return g(f(a));
}

int f(int a){
	int sum=0;
	while(a>=1){
		sum += a%10;
		a /= 10;
	}
	return sum;
}
