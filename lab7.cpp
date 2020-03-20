#include <iostream>
#include <math.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    int a[16];
    int i,max,min,imax,imin;
    cout<<"Массив А(16):\n"<<endl;
    for (i = 1; i <= 16; i++) 
    {
        cin>>a[i];
    }
    for (i = 1; i <= 16; i++) 
    {
        cout<<a[i]<<" ";
    }
    imin = 1; min = a[1];
    imax = 1; max = a[1];
    for (i = 1; i <= 16; i++) 
    {
        if(a[i] < min)
        {
            min = a[i];
            imin = i;
        }
        if(a[i] > max)
        {
            max = a[i];
            imax = i;
        }
    }
    cout<<endl;
    cout<<"imin = "<<imin<<" min = "<<min<<endl;
    cout<<"imax = "<<imax<<" max = "<<max<<endl;
    cout<<endl;
    cout<<"Всі парні елементи до мінімального:"<<endl;
    for (i = 1; i <= imin; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    printf("Всі непарні елементи після максимального:\n");
    for (i = imax; i <= 16; i++)
    {
        if (a[i] % 2 == 1)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
