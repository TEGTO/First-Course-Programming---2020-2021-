#include <iostream>
#include <fstream>
#include"MAT.h"
#pragma warning(disable : 4996)
using namespace std;

int MATRIX::find_same(DATA data, int k)
{
	FILE* fp= nullptr;
	DATA check;
	if (k==1)
	{
		fp= fopen("mat_first.txt", "r+b");
	}
	if (k==2)
	{
		fp = fopen("mat_second.txt", "r+b");
	}
	int a = sizeof(DATA);
	fpos_t cur_pos;
	while (!feof(fp))
	{
		fread(&check, sizeof(DATA), 1, fp);
		if (check.row == data.row && check.col == data.row)
		{
		
			fgetpos(fp, &cur_pos);
			fseek(fp, -a, SEEK_CUR);

			fwrite(&data, sizeof(DATA), 1, fp);

			fseek(fp, cur_pos, SEEK_SET);
			fclose(fp);
			return 1;
		}

	}
	return 0;




}
//void MATRIX::announcement()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		arr1[i] = new int[100]{};
//	}
//	for (int i = 0; i < 100; i++)
//	{
//		arr2[i] = new int[100]{};
//	}
//}
void MATRIX::addition2()
{
	DATA check,check2;
	ifstream read1("mat_first.txt");
	ifstream read2;
	int k = 0;
	while (!read1.eof())
	{
		k = 0;
		read1.read((char*)&check, sizeof(check));
		read2.open("mat_second.txt");
		while (!read1.eof())
		{
		
			read2.read((char*)&check2, sizeof(check));
			if (check.col ==check2.col&& check.row == check.row)
			{
				cout << "Число = " << check.number+check2.number << "  Ряд = " << check.row << "   Стовпчик = " << check.col << endl << endl;
				k = 1;
			}
			
		}
		read2.close();
		if (k==0)
		{
			cout << "Число = " << check.number << "  Ряд = " << check.row << "   Стовпчик = " << check.col << endl << endl;
		}


	}
	while (!read1.eof())
	{

		read1.read((char*)&check, sizeof(check));
		read2.open("mat_second.txt");
		while (!read1.eof())
		{

			read2.read((char*)&check2, sizeof(check));
			if (check.col != check2.col || check.row != check.row)
			{
				cout << "Число = " <<check2.number << "  Ряд = " << check.row << "   Стовпчик = " << check.col << endl << endl;
			
			}

		}
		read2.close();
	}

}

//void MATRIX::delete_arr()
//{
//	for (int i = 0; i < 10; i++)
//		delete[] arr1[i];
//	for (int i = 0; i < 10; i++)
//		delete[] arr2[i];
//
//}


int MATRIX::add_element_first()
{
	
	DATA number;
	ofstream out("mat_first.txt", ios::binary | ios::app);
	int a, k=1;
	while (true)
	{
		cout << "1.Добавить элемент\n2.Вернутся назад\n";
		cin >> a;
		switch (a)
		{
		case 1:

			cout << "Введите число\n";
			cin >> number.number;
			cout << "Введите ряд\n";
			cin >> number.row;
			cout << "Введите стовпчик\n";
			cin >> number.col;
			if (find_same(number,k)==0)
			{
				out.write((char*)&number, sizeof(number));
			
				
			}
			system("pause");
			break;
		case 2:
			out.close();
			system("pause");
			return 0;
			
			break;
		default:
			break;
		}
	}

	

}

void MATRIX::print_first()
{
	DATA check;
	ifstream read("mat_first.txt");
	read.read((char*)&check, sizeof(check));
	while (!read.eof())
	{
		cout << "Число = " << check.number << "  Ряд = " << check.row << "   Стовпчик = " << check.col << endl << endl;
		read.read((char*)&check, sizeof(check));


		

	}
	read.close();
}

int MATRIX::add_element_second()
{
	DATA number;
	ofstream out("mat_second.txt", ios::binary | ios::app);
	int a, k = 2;
	while (true)
	{
		cout << "1.Добавить элемент\n2.Вернутся назад\n";
		cin >> a;
		switch (a)
		{
		case 1:

			cout << "Введите число\n";
			cin >> number.number;
			cout << "Введите ряд\n";
			cin >> number.row;
			cout << "Введите стовпчик\n";
			cin >> number.col;
			if (find_same(number, k) == 0)
			{
				out.write((char*)&number, sizeof(number));
			

			}
			system("pause");
			break;
		case 2:
			system("pause");
			out.close();
			return 0;

			break;
		default:
			break;
		}
	}


}

void MATRIX::print_second()
{
	DATA check;
	ifstream read("mat_second.txt");
	read.read((char*)&check, sizeof(check));
	while (!read.eof())
	{
		cout << "Число = " << check.number << "  Ряд = " << check.row << "   Стовпчик = " << check.col << endl << endl;
		read.read((char*)&check, sizeof(check));




	}
	read.close();
}

void MATRIX::addition()
{
	DOUBLEARR mat;
	DATA check;
	ifstream read1("mat_first.txt");
	
	while (!read1.eof())
	{
		
		read1.read((char*)&check, sizeof(check));
		mat.arr1[check.row][check.col] = check.number;



	}
	read1.close();
	ifstream read2("mat_second.txt");
	
	while (!read2.eof())
	{
	
		read2.read((char*)&check, sizeof(check));
		mat.arr2[check.row][check.col] = check.number;



	}
	read2.close();

	int arr3[100][100]{};
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			arr3[i][j] = mat.arr1[i][j] + mat.arr2[i][j];
		}
	}


	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr3[i][j]!=0)
			{
				cout << "Число = " << arr3[i][j] << "  Ряд = " << i << "   Стовпчик = " <<j << endl << endl;
			}
		}
	}

}

void MATRIX::multiplication()
{
	DOUBLEARR mat;
	DATA check;
	ifstream read1("mat_first.txt");

	while (!read1.eof())
	{

		read1.read((char*)&check, sizeof(check));
		mat.arr1[check.row][check.col] = check.number;



	}
	read1.close();
	ifstream read2("mat_second.txt");

	while (!read2.eof())
	{

		read2.read((char*)&check, sizeof(check));
		mat.arr2[check.row][check.col] = check.number;



	}
	read2.close();
	int result = 0;
	int arr3[100][100]{};
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			for (int place = 0; place < 100; place++)
			{
				result = mat.arr1[i][place] * mat.arr2[place][j] + result;
			}
			arr3[i][j] = result;
			result = 0;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr3[i][j] != 0)
			{
				cout << "Число = " << arr3[i][j] << "  Ряд = " << i << "   Стовпчик = " << j << endl << endl;
			}
		}
	}
	
}


