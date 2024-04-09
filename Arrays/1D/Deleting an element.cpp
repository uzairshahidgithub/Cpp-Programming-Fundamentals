#include <iostream>
using namespace std;
int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    cout<<"Enter the number : ";
    int element;
    cin>>element;
    

    int i;
    for (i=0; i<size; i++) 
	{
        if (arr[i] == element) 
		{
            break;
        }
    }

    if (i < size) 
	{
        for (int j=i; j<size-1; j++) 
		{
            arr[j] = arr[j+1];
        }
        
        size--;
        cout << "Updated array: ";
        for (i=0; i<size; i++) 
		{
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    } 

	else 
	{
        cout<<"Element not found"<<endl;
    }

    return 0;
}