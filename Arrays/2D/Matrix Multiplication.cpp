#include <iostream>
using namespace std;
int main() 
{
    int m1[2][3] = {{1, 2, 3},
                    {4, 5, 6}};
    
    int m2[3][2] = {{7, 8},
                    {9, 10},
                    {11, 12}};
    
    int r[2][2] = {0};
    
    for (int i=0; i<2; i++) 
	{
        for (int j=0; j<2; j++) 
		{
            for (int k=0; k<3; k++) 
			{
                r[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    
    cout << "Resultant Matrix:"<<endl;
    for (int i=0; i<2; i++) 
	{
        for (int j=0; j<2; j++) 
		{
            cout<<r[i][j]<<" ";
        }
            cout<<endl;
    }
    
    return 0;
}

