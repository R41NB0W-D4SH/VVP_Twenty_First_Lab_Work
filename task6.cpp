#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string line;
	int i;

	cout << "Введите полный путь файла: ";
	getline(cin, line);

	i = line.length() - 1;

	while (line[i] != '\\')
	{
		i--;
	}
	i -= 2;

	while (line[i] != '\\')
	{
		if (i != 0) i--;
		else
		{
			cout << "\\";
			return 0;
		}
	}

	i++;
	cout << "Название последнего каталога: ";
	while (line[i] != '\\') cout << line[i++];

	cout << endl;

	system("pause");
	return 0;
}
