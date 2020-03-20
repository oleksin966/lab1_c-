#include <iostream>

using namespace std;
void f1(float a[3][3])
{
    int i,j;
    float min;
    min = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    cout<<min;
}

void f2(float a[3][4])
{
    int i,j;
    float min;
    min = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    cout<<min;
}


int main()
{
    int n = 3, m = 3;
    float a[3][3] = {{-128.2, 0.128, 313.2},
                    {-324.2, 111.103, 0.145},
                    {143.5, 0.145, 339.5}};
    float b[3][4] = {{7, -6 ,5, 8},
                    {3, -2, 1, 4},
                    {-3, 4, 5, 9}};
                    
    f1(a);
    cout<<endl;
    f2(b);
}