#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
	int num1,num2,num3;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    int sum=num1+num2+num3;
    
	ofstream file;
	file.open("sumof3num.txt");
	file<<num1<<num2<<num3<<sum;
	file.close();
	cout<<"file created successfully";	
	return 0;
}
