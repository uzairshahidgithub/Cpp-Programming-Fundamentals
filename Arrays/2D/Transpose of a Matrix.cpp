#include <iostream>
using namespace std;
int main() {
    int m[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    
    for (int i=0; i<3; i++) 
	{
        for (int j=0; j<3; j++) 
		{
         cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Transpose Matrix:"<<endl;
    for (int i=0; i<3; i++) 
	{
        for (int j=0; j<3; j++) 
		{
            cout<<m[j][i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

