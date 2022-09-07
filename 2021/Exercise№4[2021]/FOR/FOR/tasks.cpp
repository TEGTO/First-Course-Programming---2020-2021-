#include <iostream>
#include <cmath>
using namespace std;
//Даны целые числа K и N (N > 0). Вывести N раз число K.
void task1()
{
	cout << "task1" << endl;
	int K = 10, N = 5;
	for (int i = 0; i < N; i++)
	{
		cout << K << endl;

	}
	system("pause");
}

/*Даны два целых числа A и B(A < B).Вывести в порядке возрастания все
целые числа, расположенные между A и B(включая сами числа A и B),
а также количество N этих чисел.*/
void task2()
{
	cout << "task2" << endl;
	int A=3, B=10;
	int N = 0;
	for (A; A <= B; A++)
	{
		
		N++;
		cout << A << endl;
	}
	cout << "N= " << N << endl << endl;
}


/*Дано вещественное число — цена 1 кг конфет.Вывести стоимость 0.1,
0.2, …, 1 кг конфет.*/
void task3()
{
	cout << "task3" << endl;

	double price = 1.2;
	for (int i = 1; i <= 10; i++)
	{
	
		
		cout << (price / 10) * i << endl;
		

	}
	system("pause");
}
/*Дано вещественное число A и целое число N (> 0). Используя один
цикл, вывести все целые степени числа A от 1 до N.*/
void task4()
{
	cout << "task4" << endl;
	double A = 0.4;
	int N = 8;
	for (int i = 1; i <= N; i++)
	{
		cout << pow(A, i) << endl;

	}
	system("pause");
}


/*Дано целое число N (> 0). Найти произведение
N! = 1·2·…·N
(N–факториал). Чтобы избежать целочисленного переполнения, вычис-
лять это произведение с помощью вещественной переменной и вывести
его как вещественное число.*/
void task5()
{
	cout << "task5" << endl;
	int N;
	cout << "Enter N" << endl;
	cin >> N;
	double p = 1;
	for (int i = 1; i < N; i++)
	{
		
		p = i * p;
	}
	cout << p << endl;
	system("pause");
}