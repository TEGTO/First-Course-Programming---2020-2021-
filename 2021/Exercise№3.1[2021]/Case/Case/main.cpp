#include <iostream>
using namespace std;
void task1()
{//Дано целое число в диапазоне 1–7. Вывести строку — название дня недели, соответствующее данному числу
	
	int a;
	setlocale(LC_ALL, "RUS");
	cout << "Введите число от 1 до 7" << endl;
	cin >> a;
	switch (a)
	{
	case (1):
		cout << "Понедельник" << endl;
		break;
	case (2):
		cout << "Вторник" << endl;
		break;
	case (3):
		cout << "Среда" << endl;
		break;
	case (4):
		cout << "Четверг" << endl;
		break;
	case (5):
		cout << "Пятница" << endl;
		break;
	case (6):
		cout << "Суббота" << endl;
		break;
	case (7):
		cout << "Воскрсенье" << endl;
		break;
	}
	cout << "Конец задачи 1" << endl;
}

void task2() /*Дано целое число K. Вывести строку-описание оценки, соответствую-
щей числу K */
{
	setlocale(LC_ALL, "RUS");
	cout << "Поставьте оценку от 1 до 5" << endl;
	int k;
	cin >> k;

	switch (k)
	{
	case (1):
		cout << "Плохо" << endl;
		break;
	case (2):
		cout << "Неудовлетворительно" << endl;
		break;
	case (3):
		cout << "Удовлетворительно" << endl;
		break;
	case (4):
		cout << "Хорошо" << endl;
		break;
	case (5):
		cout << "Отлично" << endl;
		break;
	default:
		cout << "Ошибка" << endl;
		break;
	}
	cout << "Конец задачи 2" << endl;


}
void task3() /*Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 —
февраль и т. д.). Вывести название соответствующего времени года («зи-
ма», «весна», «лето», «осень»).*/
{
	int a;
	setlocale(LC_ALL, "RUS");
	cout << "Ввелите число месяца от 1 до 12" << endl;
	cin >> a;
    if (a == 12 ||a == 1|| a==2)
		cout << "Зима" << endl;
		if (a >= 3 && a < 6)
			cout << "Весна" << endl;
		if (a >= 6 && a < 9)
			cout << "Лето"<<endl;
		if (a >= 9 && a < 12)
			cout << "Зима" << endl;
		

	
	
	cout << "Конец задачи 3" << endl;


}
void task4()/*Арифметические действия над числами пронумерованы следующим
образом: 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.
Дан номер действия N (целое число в диапазоне 1–4) и вещественные чис-
ла A и B (В не равно 0). Выполнить над числами указанное действие и вы-
вести результат.*/
{
	setlocale(LC_ALL, "RUS");
	int a, b, N;
	cout << "Введите число 1" << endl;
	cin >> a;
	cout << "Введите число 2" << endl;
	cin >> b;
	cout << "Введите действие над числами где\n"<<"1 - Сложение \n"<<"2 - Вичитание\n"<<"3 - Умножение \n"<<"4 - Деление\n" << endl;
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
	cout << "Конец задачи 4" << endl;




}
void task5() /*Единицы длины пронумерованы следующим образом: 1 — дециметр,
2 — километр, 3 — метр, 4 — миллиметр, 5 — сантиметр. Дан номер еди-
22
ницы длины (целое число в диапазоне 1–5) и длина отрезка в этих едини-
цах (вещественное число). Найти длину отрезка в метрах.*/
{
	setlocale(LC_ALL, "RUS");
	int a, N;
	cout << "Введите длину" << endl;
	cin >> a;
	cout << "Введите в чем длина \n" << "1 - дециметр\n" << "2 - километр \n" << "3 - метр\n" << "4 -миллиметр \n" << "5 - сантиметр\n"<<endl;
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

	cout << "Конец задачи 5" << endl;

	
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