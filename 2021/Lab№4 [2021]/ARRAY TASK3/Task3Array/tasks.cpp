#include <iostream>
#include "tasks.h"
#include <cstring>
using namespace std;

void task3_array()
{
	setlocale(LC_ALL, "RUS");

	const int N = 8;
	int j = 0;
	int mainarray[N]{ 1,-1,0,3,1,10,8,90 };
	int arr[N]{};
	arr[0] = mainarray[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[j]<mainarray[i])
		{
			arr[j + 1] = mainarray[i];
			j++;
		}
	}
	for (int i = 0; i <=j; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
}