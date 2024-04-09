#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
	ofstream file;
	file.open("mytxt.txt");
	file.close();
	
	// code for writing to text file
	string str="Lets beigin with file handling";
	file.open("mytxt.txt");
	ofstream out("mytxt.txt");
	out<<str;
	file.close();

	return 0;
}
