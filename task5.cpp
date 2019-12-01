#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string line;
	int i, j = 0;

	cout << "Введите полный путь до нужного файла: ";
	getline(cin, line);

	for (i = line.length() - 1; i > 0; i--)
	{
		if (line[i] == '.')
		{
			i--;
			while (line[i] != '\\')
			{
				i--;
			}
			i++;
			cout << "Имя файла: ";
			while (line[i] != '.')
			{
				cout << line[i];
				i++;
			}
			break;
		}
	}
	cout << endl;
  
	system("pause");
	return 0;
}
