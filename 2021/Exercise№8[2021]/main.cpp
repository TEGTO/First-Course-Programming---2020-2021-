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
	cout << " ������� ������ �������� " << endl;
	cin >> task[0].Begin;
	cout << " ������� ����� �������� " << endl;
	cin>> task[0].End;
	task[0].number = 1;
	cout << " ������� ������ �������� " << endl;
	cin >> task[1].Begin;
	cout << " ������� ����� �������� " << endl;
	cin>> task[1].End;
	task[1].number = 2;

	cout << " ������� ������ �������� " << endl;
	cin >> task[2].Begin;
	cout << " ������� ����� �������� " << endl;
	cin>> task[2].End;
	task[2].number = 3;
	
	cout << task[3].Begin << endl;
	for ( int i = 0;  i < 3;  i++)
	{
		cout << "������ ��������" << i+1 << " " << task[i].Begin<<endl;
		cout << "����� ��������" << i+1 << " " << task[i].End<<endl;
		cout << "����� ��������" << i+1 << " ��� " << task[i].number<<endl;

	}

}



int main()
{
	
	setlocale(LC_ALL, "RUS");

	task10();
	system("pause");
	return 0;
}