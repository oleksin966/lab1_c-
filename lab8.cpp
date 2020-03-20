#include <iostream>
#include <math.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    int a[12], temp[12],i,j;
    float c[12];
    cout<<"¬х≥дний массив(12): "<<endl;
    for(i = 0;i<=12;i++)
    {
        cin>>a[i];
    }
    for(i = 0;i<=12;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    j =-1;
    for (i =1;i <=12;i++)
    {
        if(a[i] % 2 == 1)
        {
         j += 1;
         temp[j] = a[i];
        }
    }
    cout<<"ƒругий непарний елемент массиву: "<<endl;
    cout<<temp[1]<<endl;
    cout<<endl;
    cout<<"¬их≥дний массив: "<<endl;
    for(i = 0;i <= 12;i++)
    {
        c[i] = a[i] / temp[1];
        cout<<" "<<c[i];
    }
    return 0;
}
