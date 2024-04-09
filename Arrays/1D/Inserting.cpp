#include <iostream>
using namespace std;
int main() 
{ 
    // Inserts an element into an array at a specific position
    
	int a[5] = {1, 2, 3, 4, 5};  // Initial array

    int element = 10;  // Element to insert
    int position = 5;  // Position to insert

    for (int i=4; i>=position; i--)
	{
        a[i+1] = a[i];
    }

    a[position] = element;

    for (int i=0; i<6; i++)
	{
        cout<<a[i]<<" ";
    }

    return 0;
    
}
