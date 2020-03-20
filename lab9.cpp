#include <iostream>
#include <math.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    int i,j,k,h,temp[6],sum;
    cout<<"Outpu array:"<<endl;
    int a[6][6] = {{-2 ,   1 ,   2  ,  0 ,  -2 ,   0 },                                                                                          
				    {1  , -3 ,   4 , -4 ,  -3 ,   2 },                                                                                      
				   {-5  ,  4 ,  -2   , 1 ,  -5   , 1 },                                                                                          
				   {-3  ,  1 ,  -4  ,  3 ,   2  ,  4  },                                                                                       
				   {-3 ,  -5  , -3  , -2  ,  2 ,   0   },                                                                                        
				    {4  , -3 ,  -3 ,   3 ,   4 ,   2  }};
    for (i = 0;i <= 5;i++)
    {
        for (j = 0;j <= 5;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    k = 0;
    sum = 0;
    for (i = 0;i <= 5;i++)
    {
        for (j = 0;j <= 5;j++)
        {
            if (i==j)
            {
                if (a[i][j] < 0)
                {
                    k++;
                    temp[k] = i;
                }
            }
        }
    }

    for (h = 0; h <= k;h++)
    {
        for (j = 0;j <= 5;j++)
        {
            sum += a[temp[h]][j]; 
        }
    }
    cout<<"sum = "<<sum;
    return 0;
}
