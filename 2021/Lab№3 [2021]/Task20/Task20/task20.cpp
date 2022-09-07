#include <iostream>
#include <math.h>
#include "tasks20.h"
using namespace std;

/*	Дано функцію f(x), що всюди на [a,b] має похідну. Визначити всі нулі функції на відрізку [a,b]*/
int f(int j)
{
	int res;

	res = (j * j) - 25;
	return res;

}
int f1 (int j)
{
	int res;
	res = 2 * j;
	return res;

}
int pohidna(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		cout << "f" << sqrt(i * i) << " = " << f1(i) <<"\n";
	
	}

	return 0;

}
void null(int a, int b)
{
	int n = 1;
	for (int i = a; i <= b; i++)
	{
		if (f(i)== 0)
		{
			cout << "O" << n << " = " << i << endl;
			n++;
		}
		
	}



}
int task20()
{
	setlocale(LC_ALL, "RUS");

	int a, b;
	cout << "Введите точку а" << endl;
	cin >> a;
	cout << "Введите точку b" << endl;
	cin >> b;

	cout << "Производные: \n";
	pohidna(a, b);
	cout << "Нули функции: \n";
	null(a, b);




	system("pause");
	return 0;
}