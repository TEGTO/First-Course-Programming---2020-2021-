#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
float F;
void func(float a, float b, float c)
{
	float x1, x2, dx;
	cout << "¬ведите начало " << endl;
	cin >> x1;
	cout << "¬ведите конец " << endl;
	cin >> x2;
	cout << "¬ведите шаг " << endl;
	cin >> dx;
	for (int x = x1; x < x2; x = +dx)
	{
		if (x < 0 && b != 0){
			::F = -(2 * x - c) / (c * x - a);
			if ((c * x - a) == 0) {
				cout << "ERROR";
				break;
			}
		}
		if (x > 0 && b == 0)
		{
			if ((x - c) == 0)
			{
				cout << "ERROR";
				break;

		     }
			::F = (x - a) / (x - c);

		}
		else
		{
			if ((-(c / 2 * x)) == 0) {
				cout << "ERROR";
				break;
		}
			::F = (-(x / c)) + (-(c / 2 * x));
		}
	}
} 













int main() {
	
	setlocale(LC_ALL, "RUS");
	float a, b, c;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;
	cout << "¬ведите c: ";
	cin >> c;
	func(a, b, c);

	int ac = (int)a;
	int bc = (int)b;
	int cc = (int)c;

	if (ac == 0 || bc == 0 && ac == 0 || cc == 0)
	{
		::F = (int)::F;
		cout << "F =" << ::F << endl;
	}
	if (ac != 0 || bc != 0 && ac != 0 || cc != 0)
	{

		cout << "F =" << ::F << endl;
	}
	else
	{
		cout << "ERROR";
	}
	system("pause");



	return 0;
	


}