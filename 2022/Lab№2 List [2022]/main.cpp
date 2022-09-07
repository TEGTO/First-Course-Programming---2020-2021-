#include <iostream>
#include <fstream>

using namespace std;


struct BOOL_ONE
{
	void add_element(int info);

	int bool_dnf();
	void print();

private:

	int Size = 0;
	struct Node
	{
		int data;
		Node* next = nullptr;
		Node* prev = nullptr;

		Node(int& data) { this->data = data; }
	};
	Node* head = nullptr;
	Node* tail = nullptr;


};
void BOOL_ONE::add_element(int data) {
	Node* node = new Node(data);
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
void BOOL_ONE::print()
{

	Node* iter = head;
	while (iter != nullptr)
	{
		cout << "Data: " << iter->data << endl;

		iter = iter->next;
	}

}
int BOOL_ONE::bool_dnf()
{
	Node* iter = head;
	int x, count = 0, check = 0, j = 1, k = 0;
	if (iter == nullptr)
	{
		return 0;
	}
	count = Size;

	if (count > 2)
	{
		if (count % 2 == 0)
		{
			x = iter->data;
			check = x;
			iter = iter->next;
			while (iter != nullptr)
			{
				x = iter->data;
				check *= x;
				iter = iter->next;
				j++;
				if (j == 2)
				{
					if (check == 1)
					{
						return 1;

					}
					if (iter != nullptr)
					{
						x = iter->data;
						check = x;
						iter = iter->next;
						j = 1;
					}

				}

			}
			return 0;

		}
		else
		{
			x = iter->data;
			check = x;
			iter = iter->next;
			k++;
			while (iter != nullptr)
			{
				x = iter->data;
				check *= x;
				iter = iter->next;
				j++; k++;
				if (j == 2)
				{
					if (check == 1)
					{
						return 1;

					}
					if (k == count - 1)
					{
						x = iter->data;
						iter = iter->next;
						if (x == 1)
						{
							return 1;

						}
						else return 0;
					}
					x = iter->data;
					iter = iter->next;
					check = x;
					k++;
					j = 1;

				}

			}
			return 0;

		}


	}
	else
	{
		while (iter != nullptr)
		{

			x = iter->data;
			check = x;
			iter = iter->next;
			x = iter->data;
			check += x;
			iter = iter->next;
		}
		if (check >= 1)
		{
			return 1;
		}
		else return 0;
	}


	return 0;

}


struct BOOL_TWO
{
	void add_element(int info);

	int bool_dnf();
	void print();

private:

	int Size = 0;
	struct Node
	{
		int data;
		Node* next = nullptr;
		Node* prev = nullptr;

		Node(int& data) { this->data = data; }
	};
	Node* head = nullptr;
	Node* tail = nullptr;


};
void BOOL_TWO::add_element(int data) {
	Node* node = new Node(data);
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
void BOOL_TWO::print()
{

	Node* iter = head;
	while (iter != nullptr)
	{
		cout << "Data: " << iter->data << endl;
		
		iter = iter->next;
	}

}
int BOOL_TWO::bool_dnf()
{
	Node* iter = head;
	int x, count = 0, check = 0, j = 1, k = 0;
	if (iter == nullptr)
	{
		return 0;
	}
	count=Size;

	if (count > 2)
	{
		if (count % 2 == 0)
		{
			x = iter->data;
			check = x;
			iter = iter->next;
			while (iter != nullptr)
			{
				x = iter->data;
				check *= x;
				iter = iter->next;
				j++;
				if (j == 2)
				{
					if (check == 1)
					{
						return 1;

					}
					if (iter != nullptr)
					{
						x = iter->data;
						check = x;
						iter = iter->next;
						j = 1;
					}
					

				}

			}
			return 0;
		}
		else
		{
			x = iter->data;
			check = x;
			iter = iter->next;
			k++;
			while (iter != nullptr)
			{
				x = iter->data;
				check *= x;
				iter = iter->next;
				j++; k++;
				if (j == 2)
				{
					if (check == 1)
					{
						return 1;

					}
					if (k == count - 1)
					{
						x = iter->data;
						iter = iter->next;
						if (x == 1)
						{
							return 1;

						}
						else return 0;
					}
					x = iter->data;
					iter = iter->next;
					check = x;
					k++;
					j = 1;

				}

			}
			return 0;

		}

		
	}
	else
	{
		while (iter != nullptr)
		{

			x = iter->data;
			check = x;
			iter = iter->next;
			x = iter->data;
			check += x;
			iter = iter->next;
		}
		if (check >= 1)
		{
			return 1;
		}
		else return 0;
	}


	return 0;

}



int implication(int a, int b)
{
	int result;
	switch (a)
	{
	case 1:
		a = 0; break;
	case 0:
		a = 1; break;
	default:
		break;
	}

	result = a + b;
	if( result >=1)
	{
		cout << "Импликация истинна\n"; return 1; 
	}
	else
	{
		cout << "Импликация ложна\n"; return 0;
	}
		
	
}
int main()
{
	setlocale(LC_ALL, "rus");
	BOOL_ONE first; BOOL_TWO second;
	int a = 5;
	second.add_element(1);
	second.add_element(0);
	second.add_element(1);
	second.add_element(0);
	first.add_element(0);
	first.add_element(1);
	first.add_element(0);


	implication(first.bool_dnf(), second.bool_dnf());

	system("pause");
	return 0;
}