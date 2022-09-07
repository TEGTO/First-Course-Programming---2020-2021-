#include "list.h"
#include<fstream>
#include<iostream>
#include"io.h"
#include<climits>
#include<ctime>

#pragma warning(disable : 4996)


using namespace std;
enum form
{
	All,Oak, pine, birch, linden, fir_tree
};
void form_name(int a)
{
	static char Oak[]{ "Oak" }; char Pine[]{ "Pine" };
	char birch[]{ "Birch" }; char Linden[]{ "Linden" };
	char Fir_tree[]{ "Fir_tree" }; char All[]{ "All" };

	switch (a)
	{
	case 1:
		cout << "Oak" << endl; break;
	case 2:
		cout << "Pine" << endl; break;
	case 3:
		cout << "Birch" << endl; break;
	case 4:
		cout << "Linden" << endl; break;
	case 5:
		cout << "Fir_tree" << endl; break;
	case 0:
		cout << "All" << endl; break;
	default:
		break;
	}
}

namespace var_zero
{
	struct User
	{

		char name[30];
		int password;
		int role;
		bool check;
		bool access;
	};
	struct Point
	{
		int x;
		int y;
	};
	struct Tree
	{
		int form;
		int age;
		Point p;
		bool Is_Alive;

	};

	struct Methods
	{
		void Grow_Tree(Tree* data);

		int find_delete(Point p);
		float getAge(Tree* data);
		int check_p(Point p);
		void print_trees();
		void print_users();
		void print_Alltrees();
		int insertInfo(Point p);
		void add_random(int a);
		void delete_tree_list();
		void cut_all_tree();
		void revive_all_tree();

	};
	void Methods::revive_all_tree()
	{
		Tree check;
		FILE* fp = fopen("Trees.txt", "rb+");
		int a = sizeof(Tree);
		fpos_t cur_pos;
		while (!feof(fp))
		{
			fread(&check, sizeof(Tree), 1, fp);
			if (check.Is_Alive != true)
			{
				check.Is_Alive = true;
				fgetpos(fp, &cur_pos);
				fseek(fp, -a, SEEK_CUR);
				fwrite(&check, sizeof(Tree), 1, fp);
				fseek(fp, cur_pos, SEEK_SET);

			}

		}
		fclose(fp);
	}
	void Methods::cut_all_tree()
	{
		Tree check;
		FILE* fp = fopen("Trees.txt", "rb+");
		int a = sizeof(Tree);
		fpos_t cur_pos;
		while (!feof(fp))
		{
			fread(&check, sizeof(Tree), 1, fp);
			if (check.Is_Alive!=false)
			{
				check.Is_Alive = false;
				fgetpos(fp, &cur_pos);
				fseek(fp, -a, SEEK_CUR);
				fwrite(&check, sizeof(Tree), 1, fp);
				fseek(fp, cur_pos, SEEK_SET);
				
			}
			
		

			

		
		}
		fclose(fp);
	}
	void Methods::delete_tree_list()
	{
		ofstream out("Trees.txt", ios::binary);
		out.close();

	}
	void Methods::print_Alltrees()
	{
		{

			Tree check;
			ifstream in("Trees.txt", ios::binary);
			while (!in.eof())
			{
				in.read((char*)&check, sizeof(check));

				if (in.eof())
				{
					break;
				}
				if (check.Is_Alive != true)
				{
					cout << "\n=====Tree is dead=====\n";
				}
				else { cout << "\n=====Tree is alive=====\n"; }
					cout << "Tree_form: "; form_name(check.form);
					cout << "Tree_age: " << check.age << endl;
					cout << "Tree_Coordinates: " << "\nX:" << check.p.x << "\nY:" << check.p.y << endl << endl;
				



			}
			in.close();
		}

	}
	void Methods::print_users()
	{
		User check;
		ifstream in("UserData.txt", ios::binary);
		while (!in.eof())
		{
			in.read((char*)&check, sizeof(check));

			if (in.eof())
			{
				break;
			}

			cout << "User_name: " << check.name << endl;
			cout << "User_password: " << check.password << endl;
			cout << "User_role: " << check.role; if (check.role == 0) { cout << " - Admin\n"; }
			else { cout << " - User\n"; }cout << endl<<endl;
			
		

		}
		in.close();
	}
	int Methods::check_p(Point p)
	{
		Tree check;
		ifstream in("Trees.txt", ios::binary);
		while (!in.eof())
		{
			in.read((char*)&check, sizeof(check));


			if (check.p.x == p.x && check.p.y == p.y)
			{
				in.close();
				return 0;
				


			}

		}
		in.close();
		return 1;

	}
	void Methods::Grow_Tree(Tree* data)
	{
		ofstream out("Trees.txt", ios::binary | ios::app);
		Tree data1 = *(data);
		out.write((char*)&data1, sizeof(data1));


		out.close();
	}
	void Methods::print_trees()
  
	{

		Tree check;
		ifstream in("Trees.txt", ios::binary);
		while (!in.eof())
		{
			in.read((char*)&check, sizeof(check));

			if (in.eof())
			{
				break;
			}
			if (check.Is_Alive == true)
			{
				cout << "Tree_form: "; form_name(check.form);
				cout << "Tree_age: " << check.age << endl;
				cout << "Tree_Coordinates: " << "\nX:" << check.p.x << "\nY:" << check.p.y << endl << endl;
			}



		}
		in.close();
	}


	int Methods::find_delete(Point p)
	{
		Tree check;
		FILE* fp = fopen("Trees.txt", "r+b");
		int a = sizeof(Tree);
		fpos_t cur_pos;
		while (!feof(fp))
		{
			fread(&check, sizeof(Tree), 1, fp);
			if (check.p.x == p.x && check.p.y == p.y)
			{
				check.Is_Alive = false;
				fgetpos(fp, &cur_pos);
				fseek(fp, -a, SEEK_CUR);

				fwrite(&check, sizeof(Tree), 1, fp);

				fseek(fp, cur_pos, SEEK_SET);
				fclose(fp);
				return 1;
			}

		}
		return 0;




	}

	float Methods::getAge(Tree* data)
	{
		Tree check;
		float age = 0; int count = 0;
		ifstream in("Trees.txt", ios::binary);
		while (!in.eof())
		{
			in.read((char*)&check, sizeof(check));


			if (check.form == data->form || data->form == All)
			{
				age = age + check.age;
				count++;


			}

		}
		age = age / count;
		in.close();
		return age;

	}
	int Methods::insertInfo(Point p)
	{
		{
			Tree check;
			FILE* fp = fopen("Trees.txt", "r+b");
			int a = sizeof(Tree),b;
			fpos_t cur_pos;
			while (!feof(fp))
			{
				fread(&check, sizeof(Tree), 1, fp);
				if (check.p.x == p.x && check.p.y == p.y)
				{
					
					while (true)
					{
						
						cout << "\n�������� ��� �� ������ ��������\n";
						cout << "1.�������\n2.���\n3.����������\n4.�������� 'Is alive'\n5.��\n\n6.�����\n";
						cin >> b;
						switch (b)
						{
						case 1:
							cout << "\n������� ����� �������: ";
							cin >> check.age;
							break;
						case 2:
							cout << "�������� ����� ��� ������" << endl;
							cout << "\n1.���\n2.�����\n3.������\n4.����\n5.����\n";
							cin >> check.form;
							break;
						case 3:
							cout << "\n������� ����� ����������:\nX=  ";
							cin >> check.p.x;
							cout << "\nY= ";
							cin >> check.p.y;
							break;
						case 4:
							cout << "�������� ����� ������ ������" << endl;
							cout << "0 - dead\n1 - alive\n";
							cin >> check.Is_Alive;
							break;
						case 5:
							cout << "\n������� ����� �������: ";
							cin >> check.age;
							cout << "�������� ����� ��� ������" << endl;
							cout << "\n1.���\n2.�����\n3.������\n4.����\n5.����\n";
							cin >> check.form;
							cout << "\n������� ����� ����������:\nX=  ";
							cin >> check.p.x;
							cout << "\nY= ";
							cin >> check.p.y;
							cout << "�������� ����� ������ ������" << endl;
							cout << "0 - dead\n 1 - alive\n";
							cin >> check.Is_Alive;
							break;
						case 6: return 1;


						default:
							break;
						}
						
					


						fgetpos(fp, &cur_pos);
						fseek(fp, -a, SEEK_CUR);

						fwrite(&check, sizeof(Tree), 1, fp);

						fseek(fp, cur_pos, SEEK_SET);
						


					}

					
			
				}

			}
			return 0;
		}
	}
	void Methods::add_random(int a)
	{
		
		srand(time(NULL));
		Point p;
		
		Tree data1;
		data1.Is_Alive = true;
		p.x = rand() % 1000;
		p.y = rand() % 1000;
	
		for (int i = 0; i < a; i++)
		{
			ofstream out("Trees.txt", ios::binary | ios::app);
			data1.age = rand() % 300;
			data1.form = rand() % 6 ;
			while (check_p(p)==0)
			{
				p.x = rand() % 1000;
				p.y = rand() % 1000;
			}
			data1.p = p;
			out.write((char*)&data1, sizeof(data1));
			out.close();

		}

	

	}



	int UserPos()
	{
		Tree tr; Methods met;
		setlocale(LC_ALL, "RUS");
		int a, b;
		Point check;
		while (true)
		{
			cout << "�������� ��������" << endl;
			cout << "\n1.�������� ������\n2.������� ������ �� �����������\n3.�������� ������� ������� ����\n4.������� ��� �������\n0.�����\n";
			cout << "\n=====ADMIN MENU=====\n\n";
			cout << "5.������� ��� �������\n6.������� ���� �������������\n7.�������� ���������� � ������ �� �����������\n8.��������� ��������� ������������� ����� ��������\n9.������� ��� �������\n10.������� ��� �������\n11.������� ������ ��������\n";
			cin >> a;
			cout << endl;
			switch (a)
			{
			case 1:
				cout << "�������� ��� ������" << endl;
				cout << "\n1.���\n2.�����\n3.������\n4.����\n5.����\n";
				cin >> b;
				tr.form = b;
				tr.age = 0;
				tr.Is_Alive = true;
				cout << "\n������� ����������" << endl;
				cout << "X= ";
				cin >> check.x;
				cout << "Y= ";
				cin >> check.y;
				if (met.check_p(check) == 0)
				{
					cout << "\n����� ������\n���������� ��� ���" << endl;
					break;
				}
				tr.p = check;
				met.Grow_Tree(&tr);
				cout << "\n������ ��������" << endl<<endl;
				system("pause");
				break;
			case 2:
				cout << "\n������� ����������" << endl;
				cout << "X= ";
				cin >> check.x;
				cout << "Y= ";
				cin >> check.y;
				if (met.find_delete(check) == 1)
				{
					cout << "������ ������� ��������" << endl<<endl;
					system("pause");
					break;
				}
				else
				{
					cout << "������ �� ������� " << endl;
					system("pause");
					break;
				}
			case 3:
				cout << "\n�������� ��� ������" << endl;
				cout << "\n1.���\n2.�����\n3.������\n4.����\n5.����\n0.���\n";
				cin >> b;
				tr.form = b;
				cout << "������� ������� ���������� ���� = " << met.getAge(&tr) << endl<<endl;
				system("pause");
				break;
			case 4:
				met.print_trees();
				cout << endl;
				system("pause");
				break;
			case 5:
				met.print_Alltrees();
				cout << endl;
				system("pause");
				break;
			case 6:
				met.print_users();
				cout << endl;
				system("pause");
				break;
			case 7:
				cout << "\n������� ����������" << endl;
				cout << "X= ";
				cin >> check.x;
				cout << "Y= ";
				cin >> check.y;
				if (met.insertInfo(check) == 1)
				{
					cout << "������ ������� ���������\n" << endl;
					system("pause");
					break;
				}
				else
				{
					cout << "�� ����� ����������� ������ �� �������\n" << endl;
					system("pause");
					break;
				}
			case 8:
				cout << "������� �����" << endl;
				cin >> a;
				met.add_random(a);
				cout << "\n��������� ��������\n\n";
				system("pause");
				break;
			case 9:
				met.cut_all_tree();
				cout << "��� ������� ��������\n" << endl;
				system("pause");
				break;
			case 10:
				met.revive_all_tree();
				cout << "��� ������� ��������\n" << endl;
				system("pause");
				break;
			case 11:
				met.delete_tree_list();
				cout << "������ �������� �����\n" << endl;
				system("pause");
				break;
			case 0:
				return 0;
			default:
				break;
			}
		}


		return 0;
	}



}





namespace var_one
{
	struct Point
	{
		int x;
		int y;
	};
	struct Tree
	{
		int form;
		int age;
		Point p;
		bool Is_Alive;

	};

	struct Methods
	{
		void Grow_Tree(Tree* data);
	
		int find_delete(Point p);
		float getAge(Tree* data);
		int check_p(Point p);
		void print_trees();

	private:

	
	};

	int Methods::check_p(Point p)
	{
		Tree check;
		ifstream in("Trees.txt", ios::binary);
		while (!in.eof())
		{
			in.read((char*)&check, sizeof(check));


			if (check.p.x == p.x && check.p.y == p.y)
			{
				return 0;
				


			}

		}
		return 1;

	}
	void Methods::Grow_Tree(Tree*data)
	{
		ofstream out("Trees.txt", ios::binary | ios::app);
		Tree data1 = *(data);
		out.write((char*)&data1, sizeof(data1));


		out.close();
	}
	void Methods::print_trees()
	{

		Tree check;
		ifstream in("Trees.txt", ios::binary);
		while (!in.eof())
		{
			in.read((char*)&check, sizeof(check));

			if (in.eof())
			{
				break;
			}
			if (check.Is_Alive ==true)
			{
				cout << "Tree_form: "; form_name(check.form);
				cout << "Tree_age: " << check.age << endl;
				cout << "Tree_Coordinates: " << "\nX:" << check.p.x << "\nY:" << check.p.y << endl<<endl;
			}
		
			

		}
		in.close();
	}
	

	int Methods::find_delete(Point p)
	{
		Tree check;
		FILE* fp= fopen("Trees.txt", "r+b");
		int a =sizeof(Tree);
		fpos_t cur_pos;
		while (!feof(fp))
		{
			fread(&check, sizeof(Tree), 1, fp);
			if (check.p.x == p.x && check.p.y==p.y)
			{
				check.Is_Alive = false;
				fgetpos(fp, &cur_pos);
				fseek(fp, -a, SEEK_CUR);
				
				fwrite(&check, sizeof(Tree), 1, fp);

				fseek(fp, cur_pos, SEEK_SET);
				fclose(fp);
				return 1;
			}

		}
		return 0;
		
		
		
		
	}

	float Methods::getAge(Tree* data)
	{
		Tree check;
		float age = 0; int count = 0;
		ifstream in("Trees.txt", ios::binary);
		while (!in.eof())
		{
			in.read((char*)&check, sizeof(check));
			
			
			if (check.form == data->form|| data->form == All)
			{
				age = age + check.age;
				count++;
				
				
			}

		}
		age = age / count;
		in.close();
		return age;

	}


	int UserPos()
	{
		Tree tr; Methods met;
		setlocale(LC_ALL, "RUS");
		int a, b;
		Point check;
		while (true)
		{
			cout << "�������� ��������" << endl;
			cout << "\n1.�������� ������\n2.������� ������ �� �����������\n3.�������� ������� ������� ����\n4.������� ��� �������\n5.�����\n";
			cin >> a;
			cout << endl;
			switch (a)
			{
			case 1:
				cout << "�������� ��� ������" << endl;
				cout << "\n1.���\n2.�����\n3.������\n4.����\n5.����\n";
				cin >> b;
				tr.form = b;
				tr.age = 0;
				tr.Is_Alive = true;
				cout << "\n������� ����������" << endl;
				cout << "X= ";
				cin >> check.x;
				cout << "Y= ";
				cin >> check.y;
				if (met.check_p(check) == 0)
				{
					cout << "\n����� ������\n���������� ��� ���\n" << endl;
					system("pause");
					break;
				}
				tr.p = check;
				met.Grow_Tree(&tr);
				cout << "\n������ ��������\n" << endl;
				system("pause");
				break;
			case 2:
				cout << "\n������� ����������" << endl;
				cout << "X= ";
				cin >> check.x;
				cout << "Y= ";
				cin >> check.y;
				if (met.find_delete(check)==1)
				{
					cout << "������ ������� ��������\n" << endl;
					system("pause");
					break;
				}
				else
				{
					cout << "������ �� �������\n" << endl;
					system("pause");
					break;
				}
			case 3:
				cout << "\n�������� ��� ������" << endl;
				cout << "\n1.���\n2.�����\n3.������\n4.����\n5.����\n0.���\n";
				cin >> b;
				tr.form = b;
				cout<<"������� ������� ���������� ���� = "<<met.getAge(&tr)<<endl<<endl;
				system("pause");
				break;
			case 4:
				met.print_trees();
				cout << endl;
				system("pause");
				break;
			case 5:
				return 0;
			default:
				break;
			}
		}
		

		return 0;
	}


}