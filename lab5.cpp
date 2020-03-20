#include <iostream>
#include <math.h> 
using namespace std;
float fun(float x)
{
    float y;
    y = ((pow(x,3)*-1) - 1)/3;
    return(y);
}
int main()
{
    float max = 0, min = -1, eps = 0.0001;
    float x0,x1;
    int i;
    x1 = (max + min) / 2.0;
    do
    {
        cout<<"i = "<<i<<" x1 = "<<x1<<endl;
        x0 = x1;
        x1 = fun(x0);
        i = i + 1;
        
    }while(x0 - x1 < eps);
    return 0;
}