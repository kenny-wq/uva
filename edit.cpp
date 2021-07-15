#include<iostream>
using namespace std;


int isprimenumber(int a)
{
if (a==1)
return 0;
else if (a == 2)
return 1;

else
for (int i = 2;i<a;i++)
{
if (a%i==0)
return 0;
}

return 1;
}

int main()
{

while(1)
{
int n;
cin >> n;

if (n==-1)
break;

else
{

}
while (n!=1)
{
for (int i = 2;i<=n;i++)
{
if ((isprimenumber(i)==1)&&(n%i==0))
{
cout<<i<<"\n";
n/=i;
break;
}

}
}

}



}