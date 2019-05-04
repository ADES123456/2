#include<iostream>
#include<string>
#include<sstream>

using namespace std;

void printStringArray(string word[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << word[i] << endl;
	}
}

int main()
{
	string text;
	getline(cin, text);
	stringstream ss(text);

	string word[10];

	int i = 0;
	while (!ss.eof())
	{
		ss >> word[i];
		i++;

	}
	printStringArray(word, i);
		cout << "Length:" << text.length() << endl;
		system("pause");
		return 0;
}
