#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
	ifstream file;
	file.open("mytxt2.txt");
	file.close();
	
	string str="My New Program";
	file.open("mytxt2.txt");
	ifstream out("mytxt2.txt");
	out<<str;
	file.close();
	return 0;
}

