#include <iostream>
#include <math.h> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float I = 0.35, q = 9.86, G = 35.68;
	float temp1,temp2,temp3,temp4, w, L, z;
	cout<<"¬вед≥ть w:";
	cin>>w;
	z = G/q + 0.1;
	temp1 = 0.25 * z + (0.2*I*pow(w,2)/q);
	temp2 = sqrt(temp1);
	temp3 = 0.5*z + temp2;
	L = 10/w*sqrt(temp3);
	

	cout<<"L = "<<L;
	return 0;
}
