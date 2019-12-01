#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k = 0;
	string line;

	cout << "Введите строку: ";
	getline(cin, line);

	for (int i = 0; i < line.length(); i++)
	{
		if (line[i] == 'а' || line[i] == 'А' || line[i] == 'у' || line[i] == 'У' || line[i] == 'е' || line[i] == 'Е' || line[i] == 'ы' || line[i] == 'Ы' || line[i] == 'о' || line[i] == 'О' || line[i] == 'э' || line[i] == 'Э' || line[i] == 'я' || line[i] == 'Я' || line[i] == 'и' || line[i] == 'И' || line[i] == 'ю' || line[i] == 'Ю' || line[i] == 'ё' || line[i] == 'Ё') 
		{
			k++;
		}
	}
	cout << "Кол-во гласных букв в строке: " << k << endl;

	system("pause");
	return 0;
}
