#include <iostream>
#include "tasks.h"
#include <math.h>
using namespace std;
/*��������� ��������� ������� ������� ������� �������.
 ��������: ���������� ������� �� �����, a,b �� ���� ������� ������ ��� ��������. ������������ �������� ������� � ����� c=(a+b)/2. 
���� f(a),f(c) ����� �����, �� b=c, ������ a=c. 
����������, ���� ������ �������� ������� �� ���� ������ ������� �������� ������� ��������.*/

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
	cout << "������� ����� �" << endl;
	cin >> a;
	cout << "������� ����� b" << endl;
	cin >> b;
	
	k = -1;
	while (k < 0)
	{
		cout << "������� ��������� �������� �� ���� ��������\n";
		cin >> k;
	}
	check(a, b, k);

	system("pause");
	
}