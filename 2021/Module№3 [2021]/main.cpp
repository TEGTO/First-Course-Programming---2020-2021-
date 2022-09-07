#include <iostream>
#include <fstream>
#include "tasks.h"
#include <stdio.h>
#include <math.h>
using namespace std;

void zapis()
{

	ofstream file;
	file.open("text.txt");
	file << "cout << 4 << endl;  //nebla bla bla " << endl;
	file << "cout << 5 << endl; // ne bla2 bla2 bla2 " << endl;

	file.close();

}



void task1()
{
	ofstream file1;
	ifstream file("text.txt");
	file1.open("text1.txt");
	char text[256];
	char console[255];
	int j = 0;
	int b = 0;
	for (int i = 0; i < 2; i++)
	{
		for (; j <= i; j++)
		{
			file.getline(text, 256);
		}
		int l = 0;
		for (int i = 0; i < 256; i++)
		{
			if (text[i] == '/')
			{
				for (; i < 255; i++)
				{
					
					console[b] = text[i];
					if (console[b] == '\0')
					{
						cout << console<<endl;
						int b = 0;
						break;
						
					}
					b++;

				}
				break;

			}
			l++;
		}
		char* text1 = new char[l];
		text1[l] = '\0';
		for (int i = 0; i < l; i++)
		{


			text1[i] = text[i];

		}
		
		
		file1 << text1<<endl;
		

	}
	
	
	
	

	file.getline(text, 256);

	file.close();



}

double f(double a)
{
	return a * a;
}
void task2()
{
	struct Vector
	{
		
		double Sum (double x1, double y1, double x2, double y2)
		{
			double c;
			c = sqrt(pow((x2 + x1), 2) + pow((y2 + y1), 2));
			return c;

		}
		double SumVectors(double x1, double y1, double x2, double y2)
		{
			double a = x1 * x2 + y1 * y2;
			return a;

		}
		double Norma(double x, double y, double c)
		{
			int a = 0;
			if (f(x)==0 && x == 0) 
			{
				a++;
			}
			if (f(x+y) <= f(x)+f(y))
			{
				a++;
			}
			if (f(c*x) == sqrt(c*c)*x)
			{
				a++;
			}
			if (a == 3)
			{
				return true;

			}
			else
			{
				return false;
			}



		}
		double Skalar(double a, double b, double r)
		{
			return r* a + r*b;

		}
		void Vivid(double x , double y)
		{
			cout << "x= " << x << "\ny= " << y << endl;

		}
		void Read()
		{
			char text[256];
			ifstream file("vector.bin");
			file >> text;
			for (int i = 0; i < 256; i++)
			{
				if (text[i]=='\0')
				{
					break;
				}
				cout << text[i];
			}
		}
		void Zapis(double x, double y)
		{
			ofstream file("vector.bin");
			file << x << y<< endl;

		}

	};

	Vector ba;
	cout<<ba.Sum(1, 5,5,9);


}





void matrix()
{
	ofstream file;
	file.open("maxtrix.txt");
	file << 3 << endl;
	file << "6 8 9" << endl;
	file << "4 5 6" << endl;
	file << "3 2 1" << endl;
}
void task3()
{
	int a;
	ifstream file("matrix.txt");
	file>> a;
	char text[255];
	file.read((char*)&text, sizeof(text));
	double* numbers = new double [a*a];
	int j = 0;
	for (int i = 0; i < a*a; i++)
	{
		if (text[i] == '\0')
		{
			break;
		}
		if (text[i] == ' ')
		{
			i++;
		}
		numbers[j] = (text[i] - '0');
		j++;
	}
	file.getline(text, 255);
	int k = 0;
	double**mat = new double *[a];
	for (int i = 0; i < a; i++)
	{
		mat[i] = new double[a];
		for (int j = 0; j < a; j++)
		{
			mat[i][j] = numbers[k];
				k++;
		}
	}	
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (i == j )
			{
				if (i==j==(a-1))
				{
					break;
				}
				j++;

			}
			mat[i][j] = 0;
		}
	}
	int check = 0, check1= 0;
	for (int  i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (mat[i][j] == 0)
			{
				for (k = j; k < a; k++)
				{
					if (mat[i][k] == 0)
					{
						check++;
					}
				}
				for (int n = 0; n < a; n++)
				{
					if (mat[n][j] == 0)
					{
						check1++;
					}
				}
			}
		}
	}
	if (check == a||check1==a)
	{
		cout << "Є нульовий рядок або стовпчик" << endl;
	}

}

int task4( int a,  int b)
{
	if (b == 0 || b == a)
	{
		return 1;
	}
	else
	{
		return task4(a - 1, b - 1) + task4(a - 1, b);
	}
}


int main()
{
	setlocale(LC_ALL, "rus");
	zapis();
	task1();
	/*task2();*/
	/*matrix();
	cout << task4(5, 5);*/

	system("pause");
	return 0;
}