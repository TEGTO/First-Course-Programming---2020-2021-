#include <iostream>
#include "tasks.h"
#include <math.h>
using namespace std;
/*Розв’язати наближено нелінійне рівняння методом бісекції.
 Алгоритм: користувач вводить дві точки, a,b на яких функція приймає різні значення. Обчислюється значення функції в точці c=(a+b)/2. 
Якщо f(a),f(c) різних знаків, то b=c, інакше a=c. 
Повторюємо, доки модуль значення функції не буде меншим якогось заданого наперед значення.*/

double f(double j)
{
	double res;

	res = (j*2) - 15;
	return res;

}

double check(double a, double b, double k)
{
	double c = (a + b) / 2;
	while (true)
	{
		if (f(a)<0 && f(c) <0 || f(a)> 0 && f(c) > 0 )
		{
			a = c; 
			c = (a + b) / 2;
		}
		if (f(a) < 0 && f(c) > 0 || f(a) > 0 && f(c) < 0) {
			b = c;
			c = (a + b) / 2;
		}
		if ((sqrt(f(c)*f(c)))<k)
		{
			cout <<"f(c) = " << sqrt(f(c) * f(c)) << endl;
			return 0;
		}
	}


}









void task10()
{
	setlocale(LC_ALL, "RUS");

	double a, b, c,k;
	cout << "Введите точку а" << endl;
	cin >> a;
	cout << "Введите точку b" << endl;
	cin >> b;
	
	k = -1;
	while (k < 0)
	{
		cout << "Введите додатнное заданное на перёд значение\n";
		cin >> k;
	}
	check(a, b, k);

	system("pause");
	
}