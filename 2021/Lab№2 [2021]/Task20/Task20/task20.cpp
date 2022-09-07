#include <iostream>
#include "tasks.h"
#include <math.h>
using namespace std;
void coordinates(double a, double R)
{
	double x, y;
	int j = a / (2 * R);
	double o = (2 * R);
	for (int i = 1;  i <= j; i++)
	{
		x = o * 0.5;
		y = o * ((sqrt(3)) / 2);

		cout << "A" << i << "(" << x << "," << -y << ")" << endl;
		o = o+(2*R);
	}


}

/*20)	● Задано правильний трикутник. По його поверхні котиться коло, на ободі якого зафіксована точка. Змоделювати траєкторію цієї точки.  */
void task20()
{
	setlocale(LC_ALL, "RUS");
	double a, R;
	cout << "Введите сторону треугольника " << endl;
	cin >> a;
	cout << "Введите радиус круга" << endl;
	cin >> R;

	cout << "A(0,0)" << endl;

	coordinates(a, R);
}