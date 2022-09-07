#include <iostream>
#include <math.h>
using namespace std;

float sum(int arr[], int size) {

	int min = arr[0];
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i]>0)
		{
			sum = sum + arr[i];
		}
		
	}

	cout << "sum = " << sum << endl;
	return 0;
}
float sum_before_min(int arr[], int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}

	}
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != min)
		{

			sum = sum + arr[i];

		}
		else break;
	}
	cout << "sum = " << sum << endl;
	return 0;
}
void change(int* a, int n)
{
	int tmp = 0;
	int tmp3 = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0) {
			 tmp = a[i];
			break;
		}

	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0) {
			 tmp3 = a[i];
			break;
		}

	}
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] % 2 == 0)
			{
				int tmp1 = tmp;
				
				if (a[j]>tmp)
				{
					tmp = a[j];
				}
				
				a[j] = tmp1;
				
			}
			if (a[j]%2!=0)
			{
				int tmp4 = tmp3;
				if (a[j] > tmp3)
				{
					tmp3 = a[j];
				}
				a[j] = tmp4;
			}
		}
	}


}
void main()
{
	setlocale(LC_ALL, "RUS");
	const int size = 10;
	int arr[size]{ 0,2,3,-55,7,-8,-11,12,98,65 };

	sum(arr, size);
	sum_before_min(arr, size);
	int* arr1 = arr;
	change(arr1, size);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " \t";
	}
	cout << endl;
}