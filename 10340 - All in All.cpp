#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s[100005],t[100005];

    while(cin>>s>>t){
        int slen = strlen(s);
        int tlen = strlen(t);


        int sindex=0;
        for(int tindex=0;tindex<tlen;tindex++){
            if(t[tindex]==s[sindex])
                sindex++;
        }
        if(sindex==slen)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
