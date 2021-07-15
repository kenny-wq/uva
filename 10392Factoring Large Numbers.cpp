#include<iostream>
using namespace std;


int main()
{

	while(1)
	{
		long long n;
		cin >> n;

		if (n<0)
			break;

		else
		{
			
			
				for (long long i = 2;i*i<=n;i+=1)
				{
					while (n%i==0)
					{
						cout<<"    "<<i<<"\n";
						n/=i;
						
					}

				}
				if (n>1)
				    cout<<"    "<<n<<"\n";
			

		}
		
		cout<<"\n";


	}



}



