#include <iostream>
#include "tasks.h"
#include <math.h>
#include <cmath>
#include  <stdlib.h> 
using namespace std;
/*Перевірити чи є введене число числом Кармайкла. */
int CommonDivisior(int x,int y) // у взаимно простого наиболший общий делитель должен быть 1, тут идёт проверка на нахождение
{
	while (x != y) 
	{
		if (x > y) 
		{
			x = x - y;
		}
		else 
		{
			y = y - x;
		}
	}
	return x;
}


void SimpleNumbers(int &b,int &N) //Нахождение для числа взаимно простого 
{
	int i = 2;
	
	for (; i < *(&N); i++)
	{
		if ((CommonDivisior(*(&N), i)) == 1)
		{
			
			break;
		}


	}
	
	*(&b) = i;



}

int CheckOnSimplecity(int& N)//Проверка числа на N простоту (если простое, то не подходит)
{
	for (int i = 2; i < *(&N); i++)
	{
		if (*(&N)%i ==0 && i!= N)
		{
			return 0;
			break;
		}

		
	}
	return -1;

}

int Mod(int b, int n, int N) // из-за переполненния воспользовался возведения в степень методом возведения
{
	int res = 1;

		while (n > 0)
		{
			if (n & 1)
			{
				res = (res * b) % N;
			}
			n /= 2;
			b = (b * b) % N;
		}

	return res;
}







int task10()
{
	int N;
	cout << "Введите число N на проверку (N>0)" << endl;
	cin >> N;

	

	int b= 0;
	int* pb = &b;
	int* pN = &N;
	if ((CheckOnSimplecity(*pN)) == -1 )
	{
		cout << "Число " << N << " не является числом Кармайкла. " << endl;
		return 0;

	}
	SimpleNumbers(*pb, *pN);



	
	
	if ((Mod(b, (N - 1), N)) == 1 )//результат Mod должен быть 1, тогда это число Кармайкла 
	{
		cout << "Число " << N << " является числом Кармайкла. " << endl;

	}
	
	
	else
	{
		cout << "Число " << N << " не является числом Кармайкла. " << endl;

	}
	return 0;
}