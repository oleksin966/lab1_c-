#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Russian");
    int i,j = -1;
    string name[30],day[30],month[30],year[31];
    ifstream f; 
    f.open("a.txt");
    i = 0;
    if (!f.is_open())
    {
        cout<<"LOL";
    }
    else
    {
        string str;
        while(!f.eof())
        {
            
            f>>str;
            if (i % 4 == 0)
            {   
                name[j] = str;
                cout<<name[j]<<" "<<day[j]<<" "<<month[j]<<" "<<year[j]<<endl;
                j++;
                
            }
            if (i % 4 == 1)
            {   
                day[j] = str;
            }
            if (i % 4 == 2)
            {   
                month[j] = str;
            }
            if (i % 4 == 3)
            {   
                year[j] = str;
            }
            
            i++;
            
        }
    }
    f.close();
    cout<<"-----------------------------"<<endl;
    cout<<"Люди які народилися літом до 2000 року:"<<endl;
    for(j = 0;j<8;j++)
    {
        if (atoi(year[j].c_str()) < 2000  && atoi(month[j].c_str()) > 5 && atoi(month[j].c_str()) < 9)
        {
            cout<<name[j]<<" "<<day[j]<<" "<<month[j]<<" "<<year[j]<<endl;
        }
    }
    return 0;
}
