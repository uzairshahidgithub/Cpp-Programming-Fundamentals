#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
	// code for writing to text file
	string str="Lets beigin eitb dfile handling";
	ofstream file;
	file.open("mytxt.txt");
	ofstream out("mytxt.txt");
	out<<str;
	file.close();
	return 0;
}
