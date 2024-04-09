#include <iostream>
using namespace std;
int main() 
{
    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {1, 2, 3, 4, 6};
    
    int size = 5;  // Assuming both arrays have the same size
    int equal = 1;  // Assume arrays are equal

    for (int i=0; i<size; i++) 
	{
        if (a1[i] != a2[i]) 
		{
            equal = 0;  // Mark as not equal
            break;
        }
    }

    if (equal) 
	{
       cout <<"Arrays are equal."<<endl;
    } 
	
	else 
	{
       cout <<"Arrays are not equal."<<endl;
    }

    return 0;
}
