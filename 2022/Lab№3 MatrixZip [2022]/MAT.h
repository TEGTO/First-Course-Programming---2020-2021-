#pragma once
struct DATA
{

	int number;
	int row;
	int col;

};
struct DOUBLEARR
{
	int** arr1 = new int* [100]{};
	int** arr2 = new int* [100]{};
	DOUBLEARR()
	{
		
		for (int i = 0; i < 100; i++)
		{
			arr1[i] = new int[100]{};
		}
		for (int i = 0; i < 100; i++)
		{
			arr2[i] = new int[100]{};
		}
	}

	~DOUBLEARR()
	{
		for (int i = 0; i < 100; i++)
		{
			delete[] arr1[i];
		}
		for (int i = 0; i < 100; i++)
		{
			delete[] arr2[i];
		}
		delete[]arr1;
		delete[]arr2;
	}
};
struct MATRIX
{


	int add_element_first();
	void print_first();
	/*void announcement();*/
	int add_element_second();
	void print_second();
	void addition();
	void multiplication();
	int find_same(DATA date,int k);
	void addition2();
	/*void delete_arr();*/

private:

	//int** arr1= new int*[100]{};
	
	//int arr1[100][100]{};
	//int** arr2 = new int* [100]{};


};
