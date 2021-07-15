#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s[200];
    int n,o;
    while(cin>>o&&o!=0){
        cin>>s;
        int slen=strlen(s);

        n=slen/o;

        if(n%2==0){
            int middle = n/2;
            int cycle=0;
            for (int i=0;i<slen;i+=n){
                cycle++;
                int k=n*cycle-1;
                for(int j=i;(j-i)<=(middle-1);j++){

                    swap(s[j],s[k--]);
                }

            }

        }

        else
        {
            int middle = (n+1)/2;
            int cycle=0;
            for (int i=0;i<slen;i+=n){
                cycle++;
                int k=n*cycle-1;
                for(int j=i;(j-i)<=(middle-2);j++){

                    swap(s[j],s[k--]);
                }

            }
        }

        cout<<s<<"\n";
    }
    return 0;
}
