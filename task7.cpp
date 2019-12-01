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

	cout << "Введите строку: ";
	getline(cin, line);

	cout << endl;

	for (i = 1; i < line.length(); i += 2)
	{
		cout << line[i];
	}
	if (line.length() % 2 == 0)
	{
		for (i = line.length() - 2; i >= 0; i -= 2)
		{
			cout << line[i];
		}
	}
	else
	{
		for (i = line.length() - 1; i >= 0; i -= 2)
		{
			cout << line[i];
		}
	}

	system("pause");
	return 0;
}
