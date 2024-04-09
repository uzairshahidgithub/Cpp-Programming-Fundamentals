#include<iostream>
using namespace std;
int main()

//Enter Max Min
{
	int m[2];
    
  for(int i=0;i<2;i++)
  {
  	cout<<"Enter a Marks of Student:";
  	cin>>m[i];
  }
  
  	int max=m[0];
	int min=m[0];
	
  for(int j=0;j<2;j++)
  {
  	    if (m[j] >= max)
  	    {
  	      max = m[j];
  	    }
        if (m[j] <= min)
        {
          min = m[j];
        }
  }

 cout<<"Maximum:"<<max;
 cout<<"Minimum:"<<min;
}
