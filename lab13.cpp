#include <iostream>
#include <string>
#include <cstring> 
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "Russian");
    char str[40];
    char words[10][40];
    int i, j, k;
    int count = 0;
    cout<<"Введіть str : ";
    gets(str);
    j = 0; k = 0;
    for(i=0;i<=(strlen(str));i++)
	{
		if(str[i]==' '||str[i]=='\0')
		{
			words[k][j]='\0';
			k++;	
			j=0;	
		}
		else
		{
			words[k][j]=str[i];
			j++;
		}
	}

	cout<<"Кількість слів: "<<k<<endl;
	for (i = 0; i<k; i++)
	{
	    cout<<words[i];
	        if ((words[i][strlen(words[i]) - 1]  == 'y') && (words[i][strlen(words[i]) - 2] == 't')
	        && (words[i][strlen(words[i]) - 3] == 'a'))
	        {
                count++;
	        }
	    cout<<endl;
	}
	cout<<"Кількість слів з закінченням 'aty':  "<<count<<endl;

    return 0;
}
