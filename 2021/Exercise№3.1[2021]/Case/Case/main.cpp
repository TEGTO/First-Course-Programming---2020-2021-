#include <iostream>
using namespace std;
void task1()
{//���� ����� ����� � ��������� 1�7. ������� ������ � �������� ��� ������, ��������������� ������� �����
	
	int a;
	setlocale(LC_ALL, "RUS");
	cout << "������� ����� �� 1 �� 7" << endl;
	cin >> a;
	switch (a)
	{
	case (1):
		cout << "�����������" << endl;
		break;
	case (2):
		cout << "�������" << endl;
		break;
	case (3):
		cout << "�����" << endl;
		break;
	case (4):
		cout << "�������" << endl;
		break;
	case (5):
		cout << "�������" << endl;
		break;
	case (6):
		cout << "�������" << endl;
		break;
	case (7):
		cout << "����������" << endl;
		break;
	}
	cout << "����� ������ 1" << endl;
}

void task2() /*���� ����� ����� K. ������� ������-�������� ������, ������������-
��� ����� K */
{
	setlocale(LC_ALL, "RUS");
	cout << "��������� ������ �� 1 �� 5" << endl;
	int k;
	cin >> k;

	switch (k)
	{
	case (1):
		cout << "�����" << endl;
		break;
	case (2):
		cout << "�������������������" << endl;
		break;
	case (3):
		cout << "�����������������" << endl;
		break;
	case (4):
		cout << "������" << endl;
		break;
	case (5):
		cout << "�������" << endl;
		break;
	default:
		cout << "������" << endl;
		break;
	}
	cout << "����� ������ 2" << endl;


}
void task3() /*��� ����� ������ � ����� ����� � ��������� 1�12 (1 � ������, 2 �
������� � �. �.). ������� �������� ���������������� ������� ���� (���-
��, ������, �����, �������).*/
{
	int a;
	setlocale(LC_ALL, "RUS");
	cout << "������� ����� ������ �� 1 �� 12" << endl;
	cin >> a;
    if (a == 12 ||a == 1|| a==2)
		cout << "����" << endl;
		if (a >= 3 && a < 6)
			cout << "�����" << endl;
		if (a >= 6 && a < 9)
			cout << "����"<<endl;
		if (a >= 9 && a < 12)
			cout << "����" << endl;
		

	
	
	cout << "����� ������ 3" << endl;


}
void task4()/*�������������� �������� ��� ������� ������������� ���������
�������: 1 � ��������, 2 � ���������, 3 � ���������, 4 � �������.
��� ����� �������� N (����� ����� � ��������� 1�4) � ������������ ���-
�� A � B (� �� ����� 0). ��������� ��� ������� ��������� �������� � ��-
����� ���������.*/
{
	setlocale(LC_ALL, "RUS");
	int a, b, N;
	cout << "������� ����� 1" << endl;
	cin >> a;
	cout << "������� ����� 2" << endl;
	cin >> b;
	cout << "������� �������� ��� ������� ���\n"<<"1 - �������� \n"<<"2 - ���������\n"<<"3 - ��������� \n"<<"4 - �������\n" << endl;
	cin >> N;
	switch (N)
	{
	case (1):
		cout << a + b << endl;
		break;
	case (2):
		cout << a - b << endl;
		break;
	case (3):
		cout << a * b << endl;
		break;
	case(4):
		cout << a / b << endl;
		break;
	default:
		cout << "Error" << endl;
		break;
	}
	cout << "����� ������ 4" << endl;




}
void task5() /*������� ����� ������������� ��������� �������: 1 � ��������,
2 � ��������, 3 � ����, 4 � ���������, 5 � ���������. ��� ����� ���-
22
���� ����� (����� ����� � ��������� 1�5) � ����� ������� � ���� �����-
��� (������������ �����). ����� ����� ������� � ������.*/
{
	setlocale(LC_ALL, "RUS");
	int a, N;
	cout << "������� �����" << endl;
	cin >> a;
	cout << "������� � ��� ����� \n" << "1 - ��������\n" << "2 - �������� \n" << "3 - ����\n" << "4 -��������� \n" << "5 - ���������\n"<<endl;
	cin >> N;
	switch (N)
	{case 1:
		cout << a / 10<<endl;
		break;
	case 2:
		cout << a * 1000 << endl;
		break;
	case 3:
		cout << a << endl;
		break;
	case 4:
		cout << a / 1000 << endl;
		break;
	case 5:
		cout << a / 100 << endl;
		break;


	}

	cout << "����� ������ 5" << endl;

	
}
int main()
{
	task1();
	task2();
	task3();
	task4();
	task5();



	return 0;

}