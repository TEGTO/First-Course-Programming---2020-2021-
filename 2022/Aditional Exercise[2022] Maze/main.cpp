#include <iostream>

using namespace std;
struct DATA
{
	int row;
	int col;

};

struct STACK
{
	void push_back(DATA data);
	
	void print();
	

private:

	int Size = 0;
	struct Node
	{
		DATA data;
		Node* next = nullptr;
		Node* prev = nullptr;
		Node(DATA data) { this->data = data; }
	};

	
	Node* tail = nullptr;

};
void STACK::push_back(DATA data) {
	Node* node = new Node(data);
	if (tail == nullptr) {

		tail = node;
		tail->next = nullptr;
		this->Size++;
	}
	else {
		tail->next = node;
		node->prev = tail;
		node->next = nullptr;
		tail = node;
		node->data = data;
		this->Size++;
	}
}

void STACK::print()
{
	
	Node* iter = tail;
	
	int row , col;
	do{
		{
			
			row = iter->data.row; col = iter->data.col;
			cout << "Ряд="<<row<<"    Столбик="<< col << endl;
			iter = iter->prev;

		}
	} while (iter != nullptr);
	


}
void maze()
{
	STACK st;
	int a,b,k=1 ;
	DATA dir{ 0,0 }, prev_dir{0,0};
	st.push_back(dir);
	const int rows=3, cols=3;
	int mz[rows][cols]{ 1,1,1,1,0,1,0,0,2 };//1,1,1,0,0,1,0,0,2 // 1,0,0,1,1,1,0,0,2 //1,0,0,1,0,0,1,1,2
	cout << "Введите режим" << endl;
	cout << "1.Ручное управление\n2.Алгоритм\n";
	cin >> b;
	cout << endl << endl;
	switch (b)
	{
	case 1:
		while (mz[dir.row][dir.col] != 2)
		{
			prev_dir = dir;
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < cols; j++)
				{
					if (dir.row == i && dir.col == j)
					{
						cout << '&';
					}
					else
					{
						cout << '*';
					}
				}
				cout << endl;
			}
			cout << "Введите направление" << endl;
			cout << "\n1.Лево\n2.Вправо\n3.Вниз\n4.Вверх\n";
			cin >> a;
			switch (a)
			{
			case 1:
				dir.col = dir.col - 1;
				break;
			case 2:
				dir.col = dir.col + 1;
				break;
			case 3:
				dir.row = dir.row + 1;
				break;
			case 4:
				dir.row = dir.row - 1;
				break;

			default:
				break;
			}
			if (mz[dir.row][dir.col] != 1 && mz[dir.row][dir.col] != 2)
			{

				cout << "Прохода - нет\n" << endl;
				dir = prev_dir;
				system("pause");
				cout << endl;
			}
			else
			{
				cout << "Вы успешно переместились\n" << endl;
				st.push_back(dir);
				system("pause");
				cout << endl;
			}

		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (dir.row == i && dir.col == j)
				{
					cout << '&';
				}
				else
				{
					cout << '*';
				}
			}
			cout << endl;
		}
		cout << "Вы успешно прошли\n" << endl;

		system("pause");
		cout << endl;
		cout << "Ваш маршрут: \n";
		st.print();
		break;
	case 2:
		while (mz[dir.row][dir.col] != 2)
		{
			while (k == 1)
			{
				
				
				if (mz[dir.row][dir.col] == 1)
				{
					dir.row = dir.row + 1;
					if (mz[dir.row][dir.col] == 1)
					st.push_back(dir);

					

				}
				if (mz[dir.row][dir.col] == 0 || dir.row >= rows)
				{

					dir.row -= 1;
					dir.col += 1;
					if (mz[dir.row][dir.col] == 1)
						st.push_back(dir);


				}
				if (mz[dir.row][dir.col] == 2)
				{

					st.push_back(dir);
					k = 0;

				}
			
				
			}
			
			
			
			
		}
		
		cout << "Вы успешно прошли\n" << endl;

		system("pause");
		cout << endl;
		cout << "Ваш маршрут: \n";
		st.print();
		break;
	default:
		break;
	}
	
}



int main()
{
	setlocale(LC_ALL, "RUS");


	maze();
	return 0;

}