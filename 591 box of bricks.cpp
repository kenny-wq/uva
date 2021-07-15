#include<iostream>
using namespace std;


int main()
{
    int k = 1;
	while (1)
	{
		int stack;

        cin >> stack;
        
        if (stack == 0)
            break;

        int h[51];

        for (int i = 0;i<stack;i++)
        {
        	int n;
    	    cin>>n;
			h[i]=n;
        }

        int sum=0;
        for (int i = 0;i<stack;i++)
            sum+=h[i];
        
        int average = sum/stack;

        int move=0;

        for (int i = 0;i<stack;i++)
            if(h[i]>average)
    		    move += (h[i]-average);
        
		cout<<"Set #"<<k<<"\n";
		cout<<"The minimum number of moves is "<<move<<".\n"<<"\n";
		
		k++;
	}
	
    return 0;
}
