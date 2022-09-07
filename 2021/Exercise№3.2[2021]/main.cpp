#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	double a, x, b, c;
	double F;
	cout << "¬ведите b" << endl;
	cin >> b;
	cout << "¬ведите c" << endl;
	cin >> c;
	cout << "¬ведите a" << endl;
	cin >> a;
	cout << "¬ведите х" << endl;
	cin >> x;
	if  (x > 3 && b == 0)
	{
		
		F = x - a / x - c;
	

	}
	if (x < 3 && b != 0)
	{
		
		F = a * (x, 2) - b * x + c;
	
	}
	
    
	else
	{
		F = x / c;
	
	}
	
	if (a != 0 || b != 0 && a ^ c) {
		cout <<"F =" << F << endl;
	}
	else
	{
		F = (int)F;
		cout <<"F =" << F << endl;
	}
	system("pause");

	return 0;
}