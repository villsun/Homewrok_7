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

int Counter_Author(Library books[], char* author, int size)
{
	Library temp_books[3];
	for (int i = 0; i < 3; i++)
	{
		temp_books[i] = books[i];
	}

	char str_author[50];
	strcpy(str_author, _strlwr(author));
	int counter_1 = 0;

	for (int i = 0; i < size; i++)
	{
		if (strcmp(str_author, _strlwr(temp_books[i].Author_Book)) == 0)
		{
			counter_1++;
		}
	}

	return counter_1;
}

Library* Search_Book_by_Author(Library books[], char* author, int size)
{
	Library temp_books[3];
	for (int i = 0; i < 3; i++)
	{
		temp_books[i] = books[i];
	}

	int counter_1 = Counter_Author(temp_books, author, size);

	char str_author[50];
	strcpy(str_author, _strlwr(author));

	Library* books_1 = new Library[counter_1];
	int counter_2 = 0;

	for (int i = 0; i < size; i++)
	{
		if (strcmp(str_author, _strlwr(temp_books[i].Author_Book)) == 0)
		{
			books_1[counter_2] = books[i];
			counter_2++;
		}
	}

	return books_1;
}

int Counter_Name(Library books[], char* name, int size)
{
	Library temp_books[3];
	for (int i = 0; i < 3; i++)
	{
		temp_books[i] = books[i];
	}

	char str_name[50];
	strcpy(str_name, _strlwr(name));
	int counter_1 = 0;

	for (int i = 0; i < size; i++)
	{
		if (strcmp(str_name, _strlwr(temp_books[i].Name_Book)) == 0)
		{
			counter_1++;
		}
	}

	return counter_1;
}

Library* Search_Book_by_Name(Library books[], char* name, int size)
{
	Library temp_books[3];
	for (int i = 0; i < 3; i++)
	{
		temp_books[i] = books[i];
	}

	int counter_1 = Counter_Name(temp_books, name, size);
	char str_name[50];
	strcpy(str_name, _strlwr(name));

	Library* books_1 = new Library[counter_1];
	int counter_2 = 0;

	for (int i = 0; i < size; i++)
	{
		if (strcmp(str_name, _strlwr(temp_books[i].Name_Book)) == 0)
		{
			books_1[counter_2] = books[i];
			counter_2++;
		}
	}

	return books_1;
}

void Sort_by_Name(Library books[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (strcmp(books[j].Name_Book, books[i].Name_Book) == -1)
			{
				swap(books[i], books[j]);
			}
		}
	}
}

void Sort_by_Author(Library books[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (strcmp(books[j].Author_Book, books[i].Author_Book) == -1)
			{
				swap(books[i], books[j]);
			}
		}
	}
}

void Sort_by_Publishing(Library books[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (strcmp(books[j].Publishing_Book, books[i].Publishing_Book) == -1)
			{
				swap(books[i], books[j]);
			}
		}
	}
}




int main()
{


	return 0;
}