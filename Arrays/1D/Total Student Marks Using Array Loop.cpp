#include<iostream>
using namespace std;
int main()
//Enter Total Student Marks Using Array Loop
{
  int n;
  cout<<"Enter Numbers of Students:";
  cin>>n;
  
  int m[n];
  int sum=0;
  
  for(int i=0;i<n;i++)
  {
  	cout<<"Enter a Marks of Student"<<endl;
  	cin>>m[i];
  }
  
  for(int j=0;j<n;j++)
  {
  	sum=sum+m[j];
  }
  
  cout<<"Total Marks="<<sum;
}
