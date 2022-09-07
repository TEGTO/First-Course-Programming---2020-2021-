#include <iostream>
#include <math.h>
using namespace std;
float min(int arr[],int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		arr[i] = sqrt(arr[i] * arr[i]);
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	cout << "min = " << min << endl;
	return 0;
}

float sum(int arr[], int size) {

	int min = arr[0];
int sum = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = sqrt(arr[i] * arr[i]);
		sum = sum + arr[i];
	}

	cout <<"sum = " << sum << endl;
	return 0;
}

void change(int* a, int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] % 2 != 0)
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}


}

void main()
{
	setlocale(LC_ALL, "RUS");
	const int size = 10;
	int arr[size]{ 0,2,3,5,7,8,11,12,98,65 };
	

	min(arr, size);
	sum(arr, size);

	int* arr1 = arr;
	change(arr1, size);
	cout << "arr = ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " \t";
	}
	cout << endl;
	system("pause");
}