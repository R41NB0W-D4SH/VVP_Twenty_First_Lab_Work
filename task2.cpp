#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	int min = 256, k = 0;
	string line;

	cout << "Введите строку: ";
	getline(cin, line);

	for (int i = 0; i < line.length(); i++)
	{
		if (line[i] != ' ')
		{
			k++;
		}
		else
		{
			if (k < min) min = k;
			k = 0;
		}
	}

	cout << "Длина самого короткого слова в строке: " << k << endl;

	system("pause");
	return 0;
}
