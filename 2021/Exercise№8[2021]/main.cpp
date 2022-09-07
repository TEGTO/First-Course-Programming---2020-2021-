#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
using namespace std;


struct Marsh {
	char Begin [50];
	char End [50];
	int number;
};

void task10()
{
	setlocale(LC_ALL, "RUS");
	Marsh task[8]{};
	cout << " Введите начало маршрута " << endl;
	cin >> task[0].Begin;
	cout << " Введите конец маршрута " << endl;
	cin>> task[0].End;
	task[0].number = 1;
	cout << " Введите начало маршрута " << endl;
	cin >> task[1].Begin;
	cout << " Введите конец маршрута " << endl;
	cin>> task[1].End;
	task[1].number = 2;

	cout << " Введите начало маршрута " << endl;
	cin >> task[2].Begin;
	cout << " Введите конец маршрута " << endl;
	cin>> task[2].End;
	task[2].number = 3;
	
	cout << task[3].Begin << endl;
	for ( int i = 0;  i < 3;  i++)
	{
		cout << "Начало маршрута№" << i+1 << " " << task[i].Begin<<endl;
		cout << "Конец маршрута№" << i+1 << " " << task[i].End<<endl;
		cout << "Номер маршрута" << i+1 << " или " << task[i].number<<endl;

	}

}



int main()
{
	
	setlocale(LC_ALL, "RUS");

	task10();
	system("pause");
	return 0;
}