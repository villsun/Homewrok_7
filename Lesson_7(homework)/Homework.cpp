#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

struct Library
{
	char Name_Book[50];
	char Author_Book[50];
	char Publishing_Book[50];
	char Genre_Book[50];
};

void Show_Books(const Library books[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Name: " << books[i].Name_Book << endl;
		cout << "Author: " << books[i].Author_Book << endl;
		cout << "Publishing: " << books[i].Publishing_Book << endl;
		cout << "Genre: " << books[i].Genre_Book << endl;
		cout << endl;
	}
}





int main()
{


	return 0;
}