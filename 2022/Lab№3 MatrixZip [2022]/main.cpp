#include <iostream>
#include <fstream>
#include"MAT.h"
using namespace std;


enum Names
{
	add_first = 1, add_second, print_first, print_second, addition, multiplication, return0
};







int menu()
{
	int a;
	MATRIX mx;
	while (true)
	{
		cout << "Выберите действие\n" << "1.Добавить элемент к первой матрице\n2.Добавить элемент к второй матрице\n3.Вывести первую матрицу\n4.Вывести вторую матрицу\n5.Выполнить сложение матриц\n6.Умножить матрицы\n7.Выйти" << endl;
		cin >> a;
		switch (a)
		{
		case add_first:
			mx.add_element_first();
			break;
		case add_second:
			mx.add_element_second();
			break;
		case print_first:
			cout << endl<< endl;
			mx.print_first();
			system("pause");
			break;
		case print_second:
			cout << endl << endl;
			mx.print_second();
			system("pause");
			break;
		case addition:
			cout << endl << endl;
			mx.addition();
			system("pause");
			break;
		case multiplication:
			cout << endl << endl;
			mx.multiplication();
			system("pause");
			break;
		case return0:
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}



	return 0;
}



int main()
{
	setlocale(LC_ALL, "RUS");
	MATRIX first;
	//first.add_element_first();
	///*first.print_first();*/
	//first.multiplication();
	menu();


	
	return 0;
}

