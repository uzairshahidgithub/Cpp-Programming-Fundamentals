#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ 
     //Number Triangle using nested for loop
   
     int n;
     cout<<"Enter the value of n : ";
     cin>>n;
     cout<<"The number triangle : "; 
     
     for(int i=1;i<=n;i++)
     {
       for(int j=1;j<=i;j++)
        {
           cout<<i;
        }
        cout<<endl;
     }
}
