#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;
    int first=1;
    while(cin>>n){
        for(int i=0;i<n;i++){

            char s[210];
            if(first){
                getchar();
                first=0;
            }


            fgets(s,210,stdin);

            int slen=strlen(s);
            int alpha[300]={0};

            for(int j=0;j<slen;j++){
                if (isalpha(s[j])){
                    if(s[j]>='A'&&s[j]<='Z')
                        s[j]=s[j]-'A'+'a';
                    int d = s[j]-'a';
                    alpha[d]++;
                }


            }


            int max_=0;
            for(int k=0;k<300;k++){
                if(alpha[k]>max_)
                    max_=alpha[k];
            }

            for(int k=0;k<300;k++)
                if(alpha[k]==max_)
                    printf("%c",'a'+k);
            cout<<"\n";

        }
    }
    return 0;

}
