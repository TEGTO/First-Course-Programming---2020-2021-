#include <iostream>
#include <clocale>
#include <string>

using namespace std;

void taks_1()
{setlocale(LC_ALL, "RUS");
int a = 3; //Периметр квадрата
	int perimetr = a * 4; //Периметр квадрата
	cout << perimetr;



}
void taks_2()
{
	int a = 3; // Периметр квадрата
	int S = a * 2; //Площа квадрата
		cout << S;
}
void taks_3()
{
	int d = 2; // Диаметр окружности 
	float п = 3.14; //число ПИ
     float L = п*d; // Длина окружности
	 cout << L;
}
void task_4()
{
	float a = 3,b = 4; // два числа 
	float seredne_arf = (a + b) / 2; // среднее арифметическое
	cout << seredne_arf;


}
void task_5()
{
	int a = 3, b = 6, x = -2; // елементы линейного уравнения 
	int c = a * x + b; // линейное уравнение 
	cout << c;


	}
int main()
{
	taks_1();
	cout << endl;
	taks_2();
	cout << endl;
	taks_3();
	cout << endl;
	task_4();
	cout << endl;
	task_5();
	cout << endl;


	system("pause");
	return 0;
}


