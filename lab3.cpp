#include <iostream>
#include <math.h> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    float b = 3.85, krok, s = -2.3, f = 0.01,d, Pi = 3.14;
    float fi;
    int i, n = 7;
    cout<<"¬вед≥ть d: ";
    cin>>d;
    krok = (f - s)/(n - 1);
    i = 1;
    while(i < 7)
    {
       fi= pow(b+d,1/3)*1/tan(Pi/d+0.15);
       d += krok;
       
       cout<<"fi = "<<fi<<" d = "<<d<<endl;
       i += 1;
        
    }
    return 0;
}
