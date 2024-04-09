#include<iostream>
using namespace std;
int main()
//Enter 10 arrays to find sum avg product
{
  int m[10];
  int sum=0;
  float avg=0;
  int prod=1;
  
  for(int i=0;i<10;i++)
  {
  	cout<<"Enter a Marks of Student:";
  	cin>>m[i];
  }
  
  for(int j=0;j<10;j++)
  {
  	sum=sum+m[j];
  	prod=prod*m[j];
  	avg=sum/m[10];
  }
  
  cout<<"Total Marks="<<sum<<endl;
  cout<<"Average="<<avg<<endl;
  cout<<"product="<<prod;
}
