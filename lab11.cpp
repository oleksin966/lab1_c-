#include <iostream>

using namespace std;

int main()
{
    float b[4][4] = {
                    {3.2, -1.2, 0.18, -12.18},
                    {1.6, 0.15, 1.32, -3.5},                   
                    {-3.5, 14.3, 12.6, 1.6},
                    {12.8, 2.18, 0.2, 3.2},
                    };
    int i, j;
    float temp;
    for (i = 0; i < 4;i++)
    {
        for (j = 0; j< 4;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    temp = 0;
    for (i = 0; i < 4;i++)
    {   
        for(j = 0; j<i; j++)
        {
            if (b[i][i] > b[j][j])
            {
                temp = b[i][i];
                b[i][i] = b[j][j];
                b[j][j] = temp;
            }
            
        }
    }
    cout<<"\n"; 
    for (i = 0; i < 4;i++)
    {
        for (j = 0; j < 4;j++)
        {
             cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}