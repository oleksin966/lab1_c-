#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;
void showFile()
{
	WIN32_FIND_DATA FindFileData;
	HANDLE hf;
	hf=FindFirstFile("*.cpp", &FindFileData);
	if (hf!=INVALID_HANDLE_VALUE)
	{
		do
		{
			cout << FindFileData.cFileName << endl;
		}
		while (FindNextFile(hf,&FindFileData)!=0);
		FindClose(hf);
	}
}
void showCode(char str[40])
{
	string line;
	ifstream f;
	f.open(str);
	if (f.is_open())
	{
		while(getline(f,line))
		{
			cout<<line<<endl;
		}
	}
}
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Ukrainian");
	string cmd;
	string name;
	name = "cmd>";
	char file_name[40],temp_file[40];
	int i;
	cout<<"use the 'help' command to view the list of commands"<<endl;
	cout<<"use format <command> <file(without .cpp)>"<<endl;
	while(true)
	{
		cout<<name;
		cin>>cmd;
		if (cmd == "show")
		{
			showFile();
		}
		if (cmd == "code")
		{
			name = "file>";
			cout<<name;
			cin>>file_name;
			showCode(strcat(file_name,".cpp"));
			name = "cmd>";	
		}
		if (cmd == "execute")
		{
			name = "file>";
			cout<<name;
			cin>>file_name;
			strcat(file_name,".exe");
    		system(file_name);
			cout<<endl;
			name = "cmd>";
		}
		if (cmd == "clear")
		{
			system("cls");
		}
		if (cmd == "help")
		{
			cout<<"code    --> Показати вмістимість файлу"<<endl;
			cout<<"show    --> Вивести всі поточні файли"<<endl;
			cout<<"execute --> Скомпілюфати файл"<<endl;
			cout<<"clear   --> Почистити вікно"<<endl;
		}
	}
	return 0;
}

