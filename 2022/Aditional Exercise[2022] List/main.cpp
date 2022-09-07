#include <iostream>
using namespace std;
//������� 13

//��������� 
	struct Apart
	{
		int id;
		int counterofrooms;
		int floor;
		float S;
		char address[30];
		
	};

	struct lFile
	{
		void push_back(Apart* data);
		int insert(Apart data);
		Apart* find(Apart* info);
		void print();

	private:

		int Size = 0;
		struct Node
		{
			Apart* data;
			Node* next= nullptr;
			Node* prev= nullptr;
			Node(Apart& data){this->data = &data;}
		};
		Node* head = nullptr;
		Node* tail = nullptr;

	};

	// ��� ���������� ������������ 
	void lFile::push_back(Apart* data) {
		Node* node = new Node(*data);
		if (head == nullptr) {
			head = node;
			tail = node;
			head->prev = nullptr;
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
	//������ ������ �� id
	int lFile::insert(Apart data)
	{
		int count = 0; Node* iter = head;
		while (iter->data->id !=data.id)
		{
			iter = iter->next;
			count++;
			if (count==this->Size)
			{
				cout << "������ �������� ���" << endl;
				return 0;
			}
		}

		iter->data = &data;
		return 1;
	}
	//�����, �������� � ������ ������, ���������� � ������ �������
	Apart* lFile::find(Apart* info)
	{
		int counterofrooms = info->counterofrooms, floor = info->floor; float S= info->S;
		int counter = 0;
		Node* iter = head;
		Node* next = head;
		Node* prev = head;
		Apart* data;
		while (true)
		{
			if (iter->data->floor == floor && iter->data->counterofrooms == counterofrooms)
			{
				float check = 100 - (S * 100 / iter->data->S);
				if (check <= 10)
				{
					cout << "������� ��� ������" << endl;
					cout << "Id: " << iter->data->id << endl;
					cout << "����:" << iter->data->floor << endl;
					cout << "���������� ������: " << iter->data->counterofrooms << endl;
					cout << "�������: " << iter->data->S << endl;
					cout << "�����: " << iter->data->address << endl;

					prev->next = next;
					if (next !=NULL)
					{
						next->prev = prev;
					}
					
					data = iter->data;
					this->Size--;
					delete iter;
					return data;
				}
			}
			counter++;
			if (counter != this->Size)
			{
				iter = iter->next;
				prev = iter->prev;
				next = iter->next;
			
			}
			if (counter == this->Size)
			{
				cout << "������� �� ������" << endl;
				push_back(info);

				return nullptr;
			}
			
		}
	}
	//�����
	void lFile::print()
	{
		
		Node* iter = head;
		while (iter != nullptr)
		{ 
			cout << "Id: " << iter->data->id << endl;
			cout << "���������� ������: " << iter->data->counterofrooms << endl;
			cout << "���������� ������ " << iter->data->floor << endl;
			cout << "�������: " << iter->data->S << endl;
		cout << "�����: " << iter->data->address << endl;
		
		iter = iter->next;
		}
		
	}
	//int menu()
	//{
	//	int choice;
	//	cout << "Menu\n"
	//		<< "1.����� � ���������\n"
	//		<< "2. �������� � ���� ������\n"
	//		<< "3. ������� �� �����\n"
	//		<< "4. ������� ������ �� �����\n";
	//	cin >> choice;
	//	return choice;
	//	NodeList list;
	//	int a = menu();
	//	switch (a)
	//	{
	//	case 1:
	//		cout << "������ ���������� ������" << endl;
	//		int rooms, floors, id;
	//		float S;
	//		cin >> rooms;
	//		cout << "������ ���������� ������" << endl;
	//		cin >> floors;
	//		cout << "������ �������" << endl;
	//		cin >> S;
	//		apart.find(rooms, floors, S);
	//		break;
	//	case 2:
	//		cout << "������ ���������� ������" << endl;
	//		int rooms, floors;
	//		float S;
	//		cin >> rooms;
	//		cout << "������ ����" << endl;
	//		cin >> floors;
	//		cout << "������ �������" << endl;
	//		cin >> S;
	//		cout << "������ id" << endl;
	//		cin >> id;
	//		cout << "������ �����" << endl;
	//		char address[30];
	//		cin>>address;
	//		Apart apart_add{ id,rooms,floors,address };
	//		apart.push_back(&apart_add);
	//		break;
	// case 3:
	//		apart.print();
	//		break;
	// case 4:
	//		cout << "������ ���������� ������" << endl;
	//		int rooms, floors;
	//		float S;
	//		cin >> rooms;
	//		cout << "������ ����" << endl;
	//		cin >> floors;
	//		cout << "������ �������" << endl;
	//		cin >> S;
	//		cout << "������ id" << endl;
	//		cin >> id;
	//		cout << "������ �����" << endl;
	//		char address[30];
	//		cin>>address;
	//		Apart apart_insert{ id,rooms,floors,address };
	//		apart.push_back(apart_insert);
	//		break;
	//	default:
	//		break;
	//	}
	//}


int main()
{
	setlocale(LC_ALL, "RUS");

	Apart ap{ 1,100,1,0.2,"������� 6" };
	Apart ap1{ 2,1,500,60,"���������� 5" };
	Apart ap2{ 3,4,10,6,"Blabla 32-A" };
	Apart ap3{ 4,5,10,6,"AAAAAAAAA" };
	lFile apart;
	apart.push_back(&ap);
	apart.push_back(&ap1);
	apart.push_back(&ap2);
	/*apart.push_back(&ap3);*/
	apart.print();
	cout << "=============================" << endl;
	apart.find(&ap3);
	cout << "=============================" << endl;
	apart.print();
	system("pause");
	return 0;
}

