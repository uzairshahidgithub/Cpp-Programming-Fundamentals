#include<iostream>
using namespace std;
void add()
{
	int a,b;
	cout<<"Enter 2 Numbers for Addition : ";
	cin>>a; cin>>b;
	cout<<a+b<<endl;
}
void mult()
{
	int a,b;
	cout<<"Enter 2 Numbers for Multipication : ";
	cin>>a; cin>>b;
	cout<<a*b<<endl;
}
void div()
{
	int a,b;
	cout<<"Enter 2 Numbers for Division : ";
	cin>>a; cin>>b;
	cout<<a/b<<endl;
}
void sub()
{
	int a,b;
	cout<<"Enter 2 Numbers for Subtraction : ";
	cin>>a; cin>>b;
	cout<<a-b<<endl;
}
int main()
{
  add();
  mult();
  sub();
  div();	
  return 0;
}
