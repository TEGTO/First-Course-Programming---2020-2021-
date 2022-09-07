#include <iostream>
using namespace std;
void task_1()
{
	float L = 50; // Растояние в сантиметрах 
	float a = L / 100; // Растояние в метрах
	cout << a;
}
void task_2()
{
	float a = 2500; // количество байтов в файле
	float b = a / 1024; // количество килобайтов в файле
	cout << b;

}
void task_3()
{
	int a = 123; // вывести сначала третью потом вторую цифру 
	int b = a % 10;
	int c = a % 121;
	cout << b << c;
}
void task_4()
{
	int a = 450; // используя деление вывести первую цифру(сотню, трёх значного числа)
	int b = a / 100;
	cout << b;
}
void task_5()
{
	int N = 385; // С начала суток прошло секунд
	int M = N / 60; // Перевести секунды в минуты (ПОЛНЫЕ МИНУТЫ) 
	cout << M;
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