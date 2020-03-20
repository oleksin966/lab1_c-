#include <iostream>
#include <math.h> 
using namespace std;

int main()
{
    float a = 1.95,y, b = 0.895, start = 0.42, finish = 0.86, krok = 0.04, x, Pi = 3.14; 
    for (x = start; x <= finish; x+=krok)
    {
        y = (a*sqrt(a * x) + a*exp(x)-2.7)/b * sin(x + Pi/16);
       if (y > 1.35 && y < 2.4)
       {
            cout<<"y = "<<y<<" x = "<<x<<endl;
       }
        
    }
    
    return 0;
}