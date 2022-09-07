#include <iostream>
#include "tasks.h"
#include <math.h>
#include <cmath>
#include  <stdlib.h>
using namespace std;
/*находит перевернутое число*/
int revers(int i)
{
	 int answer=0, temp;

	while (i != 0)
	{
		temp = i % 10;
		answer = answer * 10 + temp;
		i /= 10;
	}
	return answer;
}


/*20.	Число є паліндромом, якщо воно читається однаково і зліва направо і справа наліво. Знайти всі числа – паліндроми, менші за N.*/
int task20()
{
	int N;
	cout << "Введите число " << endl;
	cin >> N;
	cout << "Числа палиндромы которые < N: " << endl;
	if (N<=10)
	{
		cout << "Таких чисел нету" << endl<<endl;
		return 0;
	}
	for (int i = 10; i < N; i++)
	{
		if (i == revers(i))
		{
			cout << i << endl;
		}
	}




	
	return 0;
}