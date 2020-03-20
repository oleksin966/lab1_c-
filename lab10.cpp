#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    int a[6][6],i,j,k,temp;
    
    cout << "¬х≥дний массив: \n";
    for (i = 0;i <= 5;i++)
    {
        cout<<i + 1<<": ";
        for (j = 0;j <= 5;j++)
        {
            a[i][j] = rand()%10;
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    temp = 0;
    for (j = 0;j <= 5;j++)
        {
            temp = a[2][j];
            a[2][j] = a[4][j];
            a[4][j] = temp;
        }
    

    cout<<"\n¬их≥дний массив: \n";
    for (i = 0;i <= 5;i++)
    {
        cout<<i + 1<<": ";
        for (j = 0;j <= 5;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
