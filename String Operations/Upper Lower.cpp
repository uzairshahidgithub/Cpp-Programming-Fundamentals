#include <iostream>
#include <string>
using namespace std;

UpperCase(const string& str) 
{
    string result = str;
    for (char& c : result) 
	{
        c = to upper(c);
    }
    return result;
}

LowerCase(const string& str) 
{
    string result = str;
    for (char& l : result) 
	{
        l = to lower(l);
    }
    return result;
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    string upperCase = toUpperCase(input);
    string lowerCase = toLowerCase(input);

    cout << "Uppercase: " << upperCase << endl;
    cout << "Lowercase: " << lowerCase << endl;

    return 0;
}

