#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int zapis()
{
	char a[]{"12115"};
	int b;
	b = sizeof(a) / sizeof(char);
	ofstream filesize("filesize.bin", ios::binary | ios::out);
	filesize.write((char*)&b, sizeof(b));

	filesize.close();
	ofstream file("file3.bin", ios::binary | ios::out);
	

		file.write((char*)a, sizeof(a));

		
		
	
	file.close();
	return b;
}
double averagenumbers(int b)
{
	int l, k = 0, m = 0;
	double result = 0;
	int n;

	char* S = new char[b]{};
	
	ifstream filesize("filesize.bin", ifstream::in | ifstream::binary);

	filesize.read((char*)&n, sizeof(n));

	filesize.close();

	ifstream file("file3.bin", ifstream::in | ifstream::binary);
	
	
		file.read((char*)S, n);
	
	file.close();

	

	



	int numbers[255];
	for (int i = 0; i < b-1; i++)
	{
		
			numbers[k] = (S[i] - '0');
			k++;
		
	}

	for (int i = 0; i < k-1 ; i++)
	{
		if (i != k-1)
		{
			result = numbers[i] * numbers[i + 1] + result;
			m++;
		}
		
	}
	if (m != 0)
	{
		result = result / m;
		return result;
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	zapis();
	cout<<averagenumbers(zapis())<<endl;



	system("pause");
	return 0;
}
