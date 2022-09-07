#include <iostream>
#include <fstream>
using namespace std;
void zapis()
{

	ofstream file;
	file.open("text.txt");
	file << "Bla bla bla" << endl;
	file.close();

}
void space()
{
	int l;
	char text[256];
	ifstream file("text.txt");
	file.getline(text, 256);
	string line = text;
	file.close();
	l = line.size();


	for (int i = 0; i < l; i++)
	{
		if (i == 0)
		{
			cout << "\t ";
		}

		if (text[i] == ' ')
		{
			cout << endl;
			cout << "\t";
		}
		cout << text[i];
	}


	cout << endl;

}





int main()
{
	setlocale(LC_ALL, "RUS");
	zapis();
	space();



	system("pause");
	return 0;
}