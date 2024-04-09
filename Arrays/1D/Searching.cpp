#include <iostream>
using namespace std;
int main() 
{
    //searching an element in a 1D array
		
    int arr[5] = {1, 2, 3, 4, 5};
    int element = 5;
    int index = -1;

    for (int i=0; i<5; i++) 
	{
        if (arr[i] == element) 
		{
            index = i;
            break;
        }
    }

    if (index != -1) 
	{
        cout<<"Element found at index "<<index<<endl;
    }
    
    else 
	{
        cout<<"Element not found"<<endl;
    }

    return 0;
}
