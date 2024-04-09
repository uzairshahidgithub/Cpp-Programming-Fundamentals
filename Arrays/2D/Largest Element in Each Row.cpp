#include <iostream>
using namespace std;
int main() {
    int m[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};
    
    int maxElement;
	for (int i=0; i<4; i++) 
	{
        maxElement = m[i][0];
        for (int j=1; j<4; j++) 
		{
            if(m[i][j] > maxElement)
            maxElement = m[i][j];
        }
        cout<<"Largest element in row "<<i<<"="<<maxElement<<endl;
    }
    
    return 0;
}

