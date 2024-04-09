#include <iostream>
using namespace std;
int main() 
{   
     //opposite traingle using nested//
      
    int i,j,a=1,b,n; 
    cout<<"Number of lines: ";
    cin>>n;

    for (i=n; i>=1; i--) 
	{
        int s=n-i;
        while (s!=0)
		{
           cout <<" ";
           s--;
        }
        for (j=1; j<i*2; j++) 
		{   
			if (j<i) 
			{
               cout<<a;
               a++;
            } 
            
			else if (j==i) 
			{
               cout<<a;
               b = a;
            } 
			
			else 
			{
                ++b;
               cout<<b;
                a--;
            }
        }
        a++;
        cout<<endl;
    }

    return 0;
}

