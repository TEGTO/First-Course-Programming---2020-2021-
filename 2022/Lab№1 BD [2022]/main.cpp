#include<iostream>
#include <fstream>
#include "list.h"
#include <io.h>
#include"string.h"
using namespace std;
enum Role
{
	admin, d_user
};

struct User
{

	char name[30];
	int password;
	int role;
	bool check;
	bool access;
};
struct lFile
{
	void push_back(User* data);
	int find(User* info);
	int find_password(User* info);
	
};
void lFile::push_back(User* data) {
	ofstream out("UserData.txt", ios::binary|ios::app);
	User data1 = *(data);
	out.write((char*)&data1, sizeof(data1));

	
	out.close();
}
int lFile::find(User* info)
{
	User check;
	ifstream in("UserData.txt", ios::binary);
	while (!in.eof())
	{
		in.read((char*)&check, sizeof(check));
		char *name= new char[30];
		name = info->name;
		if ((strcmp(check.name,name)==0)&&(check.password == info->password))
		{
			info->role = check.role;
			in.close();
			return 1;
		}

	}
	in.close();
	return 0;
	
}
int lFile::find_password(User* info)
{
	User check;
	ifstream in("UserData.txt", ios::binary);
	while (!in.eof())
	{
		in.read((char*)&check, sizeof(check));
		char* name = new char[30];
		name = info->name;
		if ((strcmp(check.name, name) == 0))
		{
			cout <<"Пароль: " << check.password << endl << endl;
			in.close();
			return 1;
		}

	}
	in.close();
	return 0;

}

int root()
{
	User user;
	user.access = 0;
	lFile check;
	
	int a, fail=0;
	
	while (user.access != 1)
	{
		cout << "Выберите действие" << endl;
		cout << "1.Вход\n2.Регистрация\n";
		if (fail==1)
		{
			fail = 0;
			cout << "3.Забыли пароль?\n";
		}
		cout << "0.Выход\n";
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "Введите логин" << endl;
			cin >> user.name;
			cout << "Введите пароль" << endl;
			cin >> user.password;
			user.check = check.find(&user);
			if (user.check == 0)
			{
				cout << "=====\nВход не выполнен\n=====\n" << endl;
				fail++;
				system("pause");

				break;
			}
			else
			{
				cout << "=====\nВход выполнен\n=====\n" << endl;
				system("pause");
				user.access = 1;
				break;
			}
		case 2:
			cout << "Введите логин" << endl;
			cin >> user.name;
			cout << "Введите пароль" << endl;
			cin >> user.password;
			cout << "Введите роль" << endl;
			cout << "0. Администратор\n1. Пользователь\n";
			cin >> user.role;
			check.push_back(&user);
			cout << "=====\nРегистрация выполнена\n=====" << endl;
			cout << "=====\nВход выполнен\n=====" << endl;
			system("pause");
			user.access = 1;
			break;
		case 3:
			cout << "Введите логин" << endl;
			cin >> user.name;
			check.find_password(&user);
			system("pause");
			break;
		case 0:
			return 2;
		default:
			break;
		}
	}
	return user.role;
}
void working(int a)
{
	switch (a)
	{

	case 0: 
		var_zero::UserPos();
		break;
	case 1:
		var_one::UserPos();
		break;
	default:
		break;
	}

}

int main()
{
	setlocale(LC_ALL, "rus");
	int a =root();
	if (a==2)
	{	system("pause");
		return 0;
	}
	working(a);
	

	


	return 0;
}