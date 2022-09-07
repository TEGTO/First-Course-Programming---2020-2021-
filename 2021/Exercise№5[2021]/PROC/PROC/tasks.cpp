#include <iostream>
#include <cmath>
#include "tasks.h"
using namespace std;
/*Описать процедуру PowerA3(A, B), вычисляющую третью степень числа
A и возвращающую ее в переменной B (A — входной, B — выходной пара-
метр; оба параметра являются вещественными). С помощью этой процеду-
ры найти третьи степени пяти данных чисел.*/
int PowerA3(double A, double B)
{
	B = A * A * A;

	return B;
}
void task1()
{
	setlocale(LC_ALL, "RUS");
	cout << "Задача №1" << endl;
	float y = 3;
	cout << PowerA3(4, y)<<endl;
	cout << PowerA3(2, y) << endl;
	cout << PowerA3(7, y) << endl;
	cout << PowerA3(12, y) << endl;
    cout << PowerA3(21, y) << endl;
	system("pause");
}

/*Описать процедуру PowerA234(A, B, C, D), вычисляющую вторую, тре-
тью и четвертую степень числа A и возвращающую эти степени соответст-
венно в переменных B, C и D (A — входной, B, C, D — выходные парамет-
ры; все параметры являются вещественными). С помощью этой процедуры
найти вторую, третью и четвертую степень пяти данных чисел.*/
int PowerA234(int A)
{
	setlocale(LC_ALL, "RUS");
	int B = A * A;
	int C = A * A * A;
	int D = A * A * A * A;
	cout << "Вторая= " << B << endl << "Третья= " << C << endl << "Четвертая= " << D << endl;
	return 0;
}
void task2()
{
	setlocale(LC_ALL, "RUS");
	cout << "Задача №2" << endl;

	cout << "число=3 "<<endl;
	PowerA234(3);
	cout << "число=6 " << endl;
	PowerA234(6);
	cout << "число=10 " << endl;
	PowerA234(10);
	cout << "число=24" << endl;
	PowerA234(24);
	cout << "число=13" << endl;
	PowerA234(13);
	system("pause");

}

/*Описать процедуру Mean(X, Y, AMean, GMean), вычисляющую среднее
арифметическое AMean = (X + Y)/2 и среднее геометрическое GMean =
= X ⋅Y двух положительных чисел X и Y (X и Y — входные, AMean
и GMean — выходные параметры вещественного типа). С помощью этой
процедуры найти среднее арифметическое и среднее геометрическое для
пар (A, B), (A, C), (A, D), если даны A, B, C, D.*/
int Mean(double x, double y)
{
	double AMean = (x + y) / 2;
	double GMean = sqrt(x * y);
	
	cout << "Среднее арифметическое=" << AMean << endl << "Среднее геометрическое= " << GMean << endl;
	return 0;
}

void task3()
{
	setlocale(LC_ALL, "RUS");
	cout << "Задача №3" << endl;
	int A = 3;
	int B = 10;
	int C = 21;
	int D = 5;

	Mean(A, C);
	cout << endl;
	Mean(A, B);
	cout << endl;
	Mean(A, D);
	cout << endl;

	system("pause");
}



/*Описать функцию Sign(X) целого типа, возвращающую для веществен-
ного числа X следующие значения:
–1, если X < 0; 0, если X = 0; 1, если X > 0.
С помощью этой функции найти значение выражения Sign(A) + Sign(B) для
данных вещественных чисел A и B.*/
int Sign(double x)
{
	if (x < 0)
	{
		return -1;
	}
	if (x == 0)
	{
		return 0;
	}
	if (x > 0)
	{
		return 1;

	}
}


void task4()
{
	setlocale(LC_ALL, "RUS");
	cout << "Задача №4" << endl;
	double A = 3.14, B = -2;
	double c =Sign(A) + Sign(B);
	cout << c << endl;

	system("pause");
}




/*Описать функцию SumRange(A, B) целого типа, находящую сумму всех
целых чисел от A до B включительно (A и B — целые). Если A > B, то
функция возвращает 0. С помощью этой функции найти суммы чисел от A
до B и от B до C, если даны числа A, B, C.*/
int SumRange(int a, int b)
{   

	if (a>b)
	{
		cout << 0 << endl;
		return 0;
	}
	else
	{

	
	int sum = 0;
	for ( a ; a < b; a++)
	{
		sum = a + sum;

	}
	cout << sum << endl;
	return sum;

    }

}

void task5()
{
	setlocale(LC_ALL, "RUS");
	cout << "Задача №5" << endl;
	int A = 30;
	int B = 23;
	int C = 40;

	SumRange(A, B);
	cout << endl;
	SumRange(B, C);
	system("pause");

}