#include <iostream>
#include "tasks.h"
using namespace std;
/*Array1. Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий N первых положительных нечетных чисел: 1, 3, 5, … .*/
void task1()
{
	cout << "Task 1" << endl;
	setlocale(LC_ALL, "RUS");

	const int N = 8;
	int arr[N];
	int a = 1;
	for (int i = 0; i <N; i++)
	{
		arr[i] = a;
		a = a+2;
	}

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");

}
/*Array2. Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий степени двойки от первой до N-й: 2, 4, 8, 16, … .*/
void task2()
{
	cout << "Task 2" << endl;
	const int N = 9;
	int arr[N];
	int a = 2;
	for (int i = 0; i < N; i++)
	{
		arr[i] = a;
		a = a * 2;
	}

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");

}



/*Array18.Дан массив A ненулевых целых чисел размера 10. Вывести значение первого из тех его элементов AK, которые удовлетворяют неравенству AK < A10. Если таких элементов нет, то вывести 0.*/
void task3()
{
	cout << "Task 3" << endl;

	const int A = 10;
	int arr[A];
	arr[0] = 53;
	for (int i = 1; i < A; i++)
	{
		arr[i] = i++;
		
	}
	
	for (int i = 0; i < A; i++)
	{
		if (arr[i] < arr[9])
		{
			cout << arr[i] << endl;
			break;
		}

	}

	system("pause");
}


/*Array19.Дан целочисленный массив A размера 10. Вывести порядковый номер последнего из тех его элементов AK, которые удовлетворяют двойному не-равенству A1 < AK < A10. Если таких элементов нет, то вывести 0.*/
void task4()
{
	cout << "Task 4" << endl;

	const int A = 10;
	int arr[A];
	arr[0] = 3;
	arr[9] = 310;
	for (int i = 1; i < A; i++)
	{
		arr[i] = i;

	}
	
	for (int i = 1; i < A; i++)
	{
		if (arr[0]<arr[i]&& arr[i]< arr[9])
		{
			cout << i << endl;
		
			break;
		}

	}

	system("pause");
}

/*Array51. Даны массивы A и B одинакового размера N. Поменять местами их со-держимое и вывести вначале элементы преобразованного массива A, а за-тем — элементы преобразованного массива B.*/
void task5()
{
	cout << "Task 5" << endl;
	const int N = 5;
	
	int A[N]{ 42,561,7,1,7 };
	int B[N]{ 1,4,722,51,96 };
	int C[N]{};

	for (int i = 0; i < N; i++)
	{
		C[i] = A[i];
		A[i] = B[i];
		B[i] = C[i];
	}
	cout << "A[] = " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " " ;
	}
	cout <<endl<<"B[] = "<< endl;
	for (int i = 0; i < N; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;
	system("pause");
}


/*Array52. Дан массив A размера N. Сформировать новый массив B того же раз-мера, элементы которого определяются следующим образом:
B[K] =2· A[K],
если AK < 5,
B[K] =A[K]/2
в противном случае.*/
void task6()
{
	cout << "Task 6" << endl;
	const int N = 5;

	double A[N]{ 42,561,7,1,7 };
	double B[N]{};
	for (int i = 0; i < N; i++)
	{
		if (A[i] < 5)
		{
			B[i] = (2 * A[i]);


		}
		else
		{
			B[i] = (A[i] / 2);
		}
		
		
	}
	cout << "B[]= " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;

 

	system("pause");
}



/*Array65. Дан массив A размера N и целое число K (1 ≤ K ≤ N). Преобразовать массив, увеличив каждый его элемент на исходное значение элемента AK.*/
void task7()

{

	cout << "Task 7" << endl;

	const int N = 5;

	double A[N]{ 42,561,7,1,150.25 };

	int K = 4;
	for (int i = 0; i < N; i++)
	{
		A[i] = A[i] + A[K];
	}
	cout << "A[]= " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	system("pause");
}







void task8()
{
	cout << "Task 8" << endl;

	const int N = 5;

	int A[N]{ 25,561,9,23 ,42};
	int i = 0;
	for (; i < N; i++)
	{
		if (A[i] % 2 == 0)
		{
			
			break;
		}

		
	}
	cout << "i = " << i << endl;
	for (int l = 0; l < N; l++)
	{
		A[l] = A[l] + A[i];
	}


	cout << "A[]= " << endl;
	for (int k = 0; k < N; k++)
	{
		cout << A[k] << " ";
	}
	cout << endl;


	system("pause");
}

