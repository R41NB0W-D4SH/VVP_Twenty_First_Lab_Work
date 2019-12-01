#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	int k = 1;
	string line;

	cout << "Введите строку: ";
	getline(cin, line);

	for (int i = 0; i < line.length() - 1; i++)
	{
		if (line[i] == ' ' & line[i + 1] != ' ') k++;
	}

	cout << "Кол-во слов в строке: " << k << endl;

	system("pause");
	return 0;
}
