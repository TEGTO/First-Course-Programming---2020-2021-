#include <iostream>
#include "tasks.h"
#include <math.h>
#include <cmath>
#include  <stdlib.h>
using namespace std;
/*������� ������������ �����*/
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


/*20.	����� � ����������, ���� ���� �������� �������� � ���� ������� � ������ �����. ������ �� ����� � ���������, ����� �� N.*/
int task20()
{
	int N;
	cout << "������� ����� " << endl;
	cin >> N;
	cout << "����� ���������� ������� < N: " << endl;
	if (N<=10)
	{
		cout << "����� ����� ����" << endl<<endl;
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