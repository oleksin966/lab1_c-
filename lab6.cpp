
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    int X[12], T[12];
    int i,a,a1,a2;
    for (i = 1;i <= 12;i++)
    {
        cin>>X[i]>>T[i];
    }
    for (i = 1;i <= 7;i++)
    {
        a1 = abs(X[i] * T[i]);
    }
    for (i = 8;i <= 12;i++)
    {
        a1 = abs(X[i] - T[i]);
    }
    for (i = 1;i <= 7;i++)
    {
        a = a1 + a2;
    }
    
    cout<<"a = "<<a;
    return 0;
}
