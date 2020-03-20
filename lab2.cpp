#include <iostream>
#include <math.h> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    float a = 12.83, b = 0.863;
    float o, temp1, temp2;
    const float Pi = 3.14;
    cout<<"¬вед≥ть о:";
    cin>>o;
    if ((a > o) && (o >= b))
    {
        temp1 = pow(log(o),1/3) + o;
    }
    else if (o > a)
    {
        temp1 = o + a * sin(pow(o,2) + Pi / 12);
    }
    cout<<"temp1 = "<<temp1;
    return 0;
}
