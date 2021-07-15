#include<iostream>
#include<string.h>
#include<ctype.h>

using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        for(int i=1; i<=n; i++)
        {
            printf("Case %d: ",i);
            char s[500];

            cin>>s;

            int slen=strlen(s);

            char ch='\0';
            int num=0;
            for(int i = 0; i<slen; i++)
            {
                if(isalpha(s[i]))
                {
                    for(int j=0; j<num ; j++)
                    {
                        cout<<ch;
                    }
                    ch=s[i];
                    num=0;
                }

                else
                {
                    num = num*10+(s[i]-'0');
                }
            }

            while(num >0)
            {
                cout <<ch;
                num--;
            }
            cout<<"\n";

        }
    }



}
