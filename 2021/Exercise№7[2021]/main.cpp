#include <iostream>
#include <math.h>
using namespace std;

void local_min(int arr[10][10], int col)
{
	int value = 0;
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j]<arr[i][j-1]&& arr[i][j] < arr[i][j + 1]|| arr[i][j] < arr[i-1][col-1] && arr[i][j]<arr[i][j+1])
			{
				value++;
			}
		}
	}
	cout << "value = " << value<<endl;

}

void sum(int arr[10][10], int col)
{
	int sum = 0;
	for (int i = 0; i < col; i++)
	{
		for (int j = i+1; j < col; j++)
		{
			sum = sum + sqrt(arr[i][j]*arr[i][j]);
		}
		
	}

	cout << "sum= " << sum << endl;


}

void main()
{
	setlocale(LC_ALL, "RUS");

	const int col = 10;
	int arr[col][col]{};
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand()%20;
		}
	}

	local_min(arr, col);
	sum(arr, col);
	
	system("pause");
}