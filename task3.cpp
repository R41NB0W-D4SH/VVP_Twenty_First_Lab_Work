#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string line;

	cout << "Введите строку: ";
	getline(cin, line);

	cout << endl << line[0];
	for (int i = 1; i < line.length(); i++)
	{
		if (line[i] == line[0])
		{
			cout << ".";
		}
		else
		{
			cout << line[i];
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
