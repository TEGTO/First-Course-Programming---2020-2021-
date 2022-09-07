#include <iostream>
#include "tasks.h"
#include <cstring>
using namespace std;


int task3str()
{
	setlocale(LC_ALL, "RUS");
	char str[] = "B*lablabla ?";

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '?')
		{
			for (int j = 0; j < strlen(str); j++)
			{
				if (str[j] == '*')
				{
					cout << "Строка является маской" << endl;
					return 0;
				}
			}
		}
	}
	cout << "Строка не является маской" << endl;
	return 0;
	system("pause");
}