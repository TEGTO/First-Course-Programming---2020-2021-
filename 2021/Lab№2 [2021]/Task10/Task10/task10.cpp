#include <iostream>
#include "tasks.h"
#include  <math.h>
using namespace std;
void central(double x1, double y1, double x2, double y2, double x3, double y3,double &x4,double& y4)
{
	x4 = (x1 + x2 + x3) / 3;
	y4 = (y1 + y2 + y3) / 3;


}
double entering_values(double &x1, double &y1, double &x2, double &y2, double &x3 , double &y3)
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите координаты точки А" << endl;
	cout << "x = ";
	cin >> x1;
	cout << endl;
	cout << "y = ";
	cin >> y1;
	cout << endl;
	cout << "Введите координаты точки B" << endl;
	cout << "x = ";
	cin >> x2;
	cout << endl;
	cout << "y = ";
	cin >> y2;
	cout << endl;
	cout << "Введите координаты точки C" << endl;
	cout << "x = ";
	cin >> x3;
	cout << endl;
	cout << "y = ";
	cin >> y3;
	cout << endl;
	return 0;
}
double small_r(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double AB, BC, CA,S,p,r;
	AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	BC = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	CA = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
	p = (AB + BC + CA) / 2;
	S = sqrt(p * ((p - AB) * (p - BC) * (p - CA)));
	
	r = (2 * S) / (AB + BC + CA);
	return r;

}
double big_R(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double AB, BC, CA, S, p, R;
	AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	BC = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	CA = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
	p = (AB + BC + CA) / 2;
	S = sqrt(p * ((p - AB) * (p - BC) * (p - CA)));

	R = (AB*BC*CA)/(4*S);
	return R;

}

void task10()
{/*Дано трикутник. Визначити центр та радіус вписаного та описаного кола*/
	double x1, y1, x2, y2, x3, y3,x4,y4;
	double* px1 = &x1, * py1 = &y1, * px2 = &x2, * py2 = &y2, * px3 = &x3, * py3 = &y3, * px4 = &x4, *py4 = &y4;
	entering_values(*px1, *py1, *px2, *py2, *px3, *py3);
	
	central(x1, y1, x2, y2, x3, y3,*px4, *py4);
	
	cout << "O" <<"(" << x4 << " , " << y4<<" )" << endl;//O центр треугольника 

	cout << "r = " << small_r(x1, y1, x2, y2, x3, y3) << endl; //радіус вписаного кола
	cout << "R = " << big_R(x1, y1, x2, y2, x3, y3) << endl; //радіус описаного кола


}