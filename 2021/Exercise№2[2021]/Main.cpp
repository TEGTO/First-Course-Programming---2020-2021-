#include <iostream>
#include <clocale>
#include <string>

using namespace std;

void taks_1()
{setlocale(LC_ALL, "RUS");
int a = 3; //�������� ��������
	int perimetr = a * 4; //�������� ��������
	cout << perimetr;



}
void taks_2()
{
	int a = 3; // �������� ��������
	int S = a * 2; //����� ��������
		cout << S;
}
void taks_3()
{
	int d = 2; // ������� ���������� 
	float � = 3.14; //����� ��
     float L = �*d; // ����� ����������
	 cout << L;
}
void task_4()
{
	float a = 3,b = 4; // ��� ����� 
	float seredne_arf = (a + b) / 2; // ������� ��������������
	cout << seredne_arf;


}
void task_5()
{
	int a = 3, b = 6, x = -2; // �������� ��������� ��������� 
	int c = a * x + b; // �������� ��������� 
	cout << c;


	}
int main()
{
	taks_1();
	cout << endl;
	taks_2();
	cout << endl;
	taks_3();
	cout << endl;
	task_4();
	cout << endl;
	task_5();
	cout << endl;


	system("pause");
	return 0;
}


