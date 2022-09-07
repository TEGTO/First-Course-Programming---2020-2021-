#include <iostream>
using namespace std;
void task1()
{
	setlocale(LC_ALL, "RUS");
	int a = 5;
	if (a > 0) a++;
	cout << a << endl;
	
	

	

	cout << "Конец задачи 1" << endl;

}
void task2()
{//Дано целое число. Если оно является положительным, то прибавить к нему 1; в противном случае вычесть из него 2. Вывести полученное число.
	setlocale(LC_ALL, "RUS");
	int a;
	cout << "Введите число = ";
	cin >> a;
	if (a > 0) a++;
	else 
	a = a + 2;
	cout << a << endl;
	cout << "Конец задачи 2" << endl;
	
		

}
void task3()
{//Даны два числа. Вывести вначале большее, а затем меньшее из них.
	setlocale(LC_ALL, "RUS");
	int a, b;
	cout << "Введите число a = ";
	cin >> a;
	cout << "Введите число b = ";
	cin >> b;
	if (a > b)
		cout << a << endl;
	else cout << b << endl;
	cout <<"Конец задачи 3" << endl;

}
void task4()
{//Даны три числа. Найти наибольшее из них.
	setlocale(LC_ALL, "RUS");
	int a=3, b=4, c=19;
	if (a > b&& a > c)
		cout << a << endl;
	if (b > c && b > a)
		cout << b << endl;
	if (c > a && c > b) 
		cout << c << endl;
	cout << "Конец задачи 4" << endl;


}
void task5()
{
	setlocale(LC_ALL, "RUS");
	cout << "a = 23 , b = 35 , c = 50" << endl;
	int a = 23, b = 34, c = 50;
	if (a > b&&b > c)
		cout << a <<c << endl;
	if (a > c&&c > b)
		cout << a << b << endl;
	if (b > a && a> c)
		cout << b << a << endl;
	if (b > c&& c > a)
		cout << b<<a << endl;
	if (c > a&& a> b)
		cout << c << endl;
	if (c > b && b> a)
		cout <<"max = " << c << " " <<"min = " << a << endl;
	cout << "Конец задачи 5" << endl;

}
int main()
{
	task1();
	task2();
	task3();
	task4();
	task5();

	return 0;
}