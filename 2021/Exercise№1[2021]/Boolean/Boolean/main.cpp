#include <iostream>
using namespace std;
void task_1()
{
	int  A = 3; // число ј положительное 
	bool c = A > 0;
	cout << c;
}
void task_2()
{
	int A = 3, B = 4, C = 5; // элементы двойного неравенства 
	bool c = A < B < C; //двойное неравенство 
	cout << c;


}
void task_3()
{
	int A = 3, B = 4, C = 19; // проверка на положительность каждого чиста 
	bool c = A > 0;
	bool f = B > 0;
	bool g = C > 0;
	cout << "Nomer3:" << " " << c << " " << f << " " << g;
}
void task_4()
{
	int a = 154; // проверить на то что все цифры чиста разные 
	int c = a % 15;
	int n = a % 149;
	int m = a / 100;
	bool j = a != c != n;
	cout << j;
}
void task_5()
{
	int a = 2552;
	int c = a % 2550; // 2 
	int j = a % 2547; // 5 
	int m = a / 1000; // 2
	int k = a / 500; // 5
	bool n = m * k == c * j;
	cout << n;
}
int main()
{
	setlocale(LC_ALL, "RUS");

	task_1();
	cout << endl;
	task_2();
	cout << endl;
	task_3();
	cout << endl;
	task_4();
	cout << endl;
	task_5();
	cout << endl;



	system("pause");
	return 0;
}