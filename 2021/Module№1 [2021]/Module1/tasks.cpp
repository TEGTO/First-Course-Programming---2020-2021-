#include <iostream>
#include <math.h>
#include "tasks.h"
using namespace std;
int fact(int N)
{
	int F = 1;

	for (int i = 1; i <= N; ++i)
	{
		F *= i; 
	}
	return F; 
}


void task1(int eps)
{// eps можно передать и через cin 
	cout << "TASK 1 " << endl;
	setlocale(LC_ALL, "rus");

	double k=1, sum=0, sum1 = 0;
	
	for (double k = 0; k < k+1; k++)
	{
		sum += ((pow((-1), k)) * (k + 1)) / fact(k);
		if ( sum - sum1 < eps)
		{
			break;
		}
	}


	cout << endl;

	system("pause");
	
}


int RandomNumber(int M)
{
	srand(time(NULL));
	int z = rand() % M+1;
	int j = rand() % 3;
	if (j == 1)
	{
		z = -z;
		return z;
	}
	return z;
}
void task2()
{
	cout << "TASK 2 " << endl;
	int M, N;
	cout << "задайте число М" << endl;
	cin >>M;

	cout << "задайте число N" << endl;
	cin >> N;
	int x1, y1,x2,y2,x3,y3;
	double AB, BC, AC;
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		x1 = RandomNumber(M); // координаты точок треугольника
		x2 = RandomNumber(M);
		x3 = RandomNumber(M);
		y1 = RandomNumber(M);
		y2 = RandomNumber(M);
		y3 = RandomNumber(M);

			AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
			BC = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2)); // стороны треугольника
			AC = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
			if (AB == BC || AB == AC || BC == AC)
			{
				cout << "Трикунт" << i << "рівнобічний " << endl;
			}
	}
	cout << endl;
	system("pause");
}

void task3()
{
	cout << "TASK 3 " << endl;
	setlocale(LC_ALL, "rus");
	const int N = 30;
	char S[N]{ "Привет, дорогой друг" };
	char T[N]{ "Привет" };  //массивы могут быть любыми
	char Y[N]{" "};
	for (int i = 0; i < strlen(S); i++)
	{
		for (int j = 0; j < strlen(T); j++)
		{
			if (S[i] == T[j])
			{
				Y[0] = '-';
				S[i] = Y[0];
			}
		}
				
	}
	int k = 0;
	for (int i = 0; i < strlen(S); i++)
	{
		
		if (S[i] != '-')
		{
			Y[k] = S[i];
			k++;
		}
	}
	
	


	for (int i = 0; i < strlen(S); i++)
	{
		cout << Y[i];
	}
	cout << endl;
	system("pause");
}



void task4()
{
	cout << "TASK 4 " << endl; // не понял задания, но будем считать что "послідовність з N літер в алфавіті" имеется в виду украинский алфавит и длина массива = количеству букв
	const int N = 33; 
	int Y[N]{};

	for (int i = 0; i < N; i++)
	{
		Y[i] = rand() % 4;
		while (Y[i] == Y[i-1] || Y[i] == Y[i-2])
		{
			Y[i] = rand() % 4;
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << Y[i];
	}
	cout << endl;
	system("pause");
}