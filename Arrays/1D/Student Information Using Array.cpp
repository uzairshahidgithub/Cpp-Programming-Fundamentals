#include<iostream>
using namespace std;
int main()
//Student Information using array
{
  string n[2];
  int m[2];
  
  cout<<"ENTER STUDENT INFORMATION"<<endl;
  for(int i=0;i<2;i++)
  {
	  cout<<"Name of Student "<<i+1<<" = ";
	  cin>>n[i];
	  cout<<"Marks of Student "<<i+1<<" = ";
	  cin>>m[i];
  }
    
  cout<<"DATA STORED SUCCESSFULLY..."<<endl;
  for(int j=0;j<2;j++)
  {
  	  cout<<n[j]<<endl;
  	  cout<<m[j]<<endl;
  }
  
}
