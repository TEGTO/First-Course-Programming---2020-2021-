#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;
void zapis()
{
	int price = 450;
	int grey = 40;

	char model[]{ "Lenovo" };
	FILE* f;
#pragma warning(disable : 4996)
	f = fopen("noobs1.bin", "wb");


	ofstream book_file("noobs1.bin");
	book_file << model << endl;
	book_file << price << endl;
	book_file << grey<< endl;

}


struct notepad
{

	char model[25];
	int price;
	int grey;

} info;

void read()
{
	ifstream emp_file("noobs1.bin");
	emp_file >> info.model ;
	emp_file >> info.price;
	emp_file >> info.grey;

	cout << info.model << endl;
	
	cout << info.price << endl;
	cout << info.grey << endl;



}


int main()
{
	zapis();
	read();



}