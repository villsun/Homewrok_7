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

void Show_Book(const Library books[], int index)
{
	cout << "Name: " << books[index].Name_Book << endl;
	cout << "Author: " << books[index].Author_Book << endl;
	cout << "Publishing: " << books[index].Publishing_Book << endl;
	cout << "Genre: " << books[index].Genre_Book << endl;
	cout << endl;
}

void Show_Books(const Library books[], int size)
{
	for (int i = 0; i < size; i++)
	{
		Show_Book(books, i);
	}
}

int Counter_Author(Library books[], char* author, int size)
{
	Library temp_books[10];
	for (int i = 0; i < size; i++)
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
	Library temp_books[10];
	for (int i = 0; i < size; i++)
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
	Library temp_books[10];
	for (int i = 0; i < size; i++)
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
	Library temp_books[10];
	for (int i = 0; i < size; i++)
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

void Change_Name(Library book[], char* str_new_name, int number_of_book)
{
	strcpy(book[number_of_book].Name_Book, str_new_name);
}

void Change_Author(Library book[], char* str_new_author, int number_of_book)
{
	strcpy(book[number_of_book].Author_Book, str_new_author);
}

void Change_Publishing(Library book[], char* str_new_publishing, int number_of_book)
{
	strcpy(book[number_of_book].Publishing_Book, str_new_publishing);
}

void Change_Genre(Library book[], char* str_new_genre, int number_of_book)
{
	strcpy(book[number_of_book].Genre_Book, str_new_genre);
}

int main()
{
	const int SIZE = 10;
	Library books[SIZE];

	strcpy(books[0].Name_Book, "Martyr!");
	strcpy(books[0].Author_Book, "Kaveh Akbar");
	strcpy(books[0].Publishing_Book, "Knopf Publishing Group");
	strcpy(books[0].Genre_Book, "Hardcover");

	strcpy(books[1].Name_Book, "Eagle Drums");
	strcpy(books[1].Author_Book, "Nasugraq Rainey Hopson");
	strcpy(books[1].Publishing_Book, "Roaring Brook Press");
	strcpy(books[1].Genre_Book, "Hardcover");

	strcpy(books[2].Name_Book, "Big");
	strcpy(books[2].Author_Book, "Vashti Harrison");
	strcpy(books[2].Publishing_Book, "Little, Brown Books for Young Readers");
	strcpy(books[2].Genre_Book, "Hardcover");

	strcpy(books[3].Name_Book, "In Every Life");
	strcpy(books[3].Author_Book, "Marla Frazee");
	strcpy(books[3].Publishing_Book, "Beach Lane Books");
	strcpy(books[3].Genre_Book, "Hardcover");

	strcpy(books[4].Name_Book, "Mexikid");
	strcpy(books[4].Author_Book, "Pedro Martin");
	strcpy(books[4].Publishing_Book, "Dial Books");
	strcpy(books[4].Genre_Book, "Paperback");

	strcpy(books[5].Name_Book, "Breath, Eyes, Memory");
	strcpy(books[5].Author_Book, "Edwidge Danticat");
	strcpy(books[5].Publishing_Book, "Soho Press");
	strcpy(books[5].Genre_Book, "Paperback");

	strcpy(books[6].Name_Book, "The Black Panther Party: A Graphic Novel History");
	strcpy(books[6].Author_Book, "David F. Walker");
	strcpy(books[6].Publishing_Book, "Ten Speed Graphic");
	strcpy(books[6].Genre_Book, "Paperback");

	strcpy(books[7].Name_Book, "The C++");
	strcpy(books[7].Author_Book, "Mykola Loniuk");
	strcpy(books[7].Publishing_Book, "The Mykola");
	strcpy(books[7].Genre_Book, "Paperback");

	strcpy(books[8].Name_Book, "Land of Milk and Honey");
	strcpy(books[8].Author_Book, "C. Pam Zhang");
	strcpy(books[8].Publishing_Book, "Riverhead Books");
	strcpy(books[8].Genre_Book, "Hardcover");

	strcpy(books[9].Name_Book, "Ulysses: An Illustrated Edition");
	strcpy(books[9].Author_Book, "James Joyce");
	strcpy(books[9].Publishing_Book, "Other Press(NY)");
	strcpy(books[9].Genre_Book, "Hardcover");

	void (*p_functions_change[4])(Library[], char*, int) = { Change_Name,  Change_Author, Change_Publishing, Change_Genre };

	int user_input;
	char str_search[50];
	int counter = 0;
	Library* str_books;
	int user_input_book;
	int user_input_choice;
	do
	{
		cout << "What do you want to know?\n1 - Show all books\n2 - Search book by author\n3 - Search book by name\n4 - Sort by name\n5 - Sort by author\n6 - Sort by publishing\n7 - Editing book\n-1 - to stop\n";
		do
		{
			cin >> user_input;
		} while (user_input<-1 || user_input>7);

		if (user_input==-1)
		{
			cout << "Goodbye";
			break;
		}

		switch (user_input)
		{
		case 1:
			Show_Books(books, SIZE);
			break;
		case 2:
			cin.ignore();
			cout << "Enter author(max size 50)\n";
			cin.getline(str_search, 50);
			counter = Counter_Author(books, str_search, SIZE);
			if (counter == 0)
			{
				cout << "There is no such author in the library.\nTry again!\n";
				break;
			}
			str_books = Search_Book_by_Author(books, str_search, SIZE);
			Show_Book(str_books, 0);
			strcpy(str_search, "");
			delete[] str_books;
			break;
		case 3:
			cin.ignore();
			cout << "Enter name(max size 50)\n";
			cin.getline(str_search, 50);
			counter = Counter_Name(books, str_search, SIZE);
			if (counter == 0)
			{
				cout << "There is no such name in the library.\nTry again!\n";
				break;
			}
			str_books = Search_Book_by_Name(books, str_search, SIZE);
			Show_Book(str_books, 0);
			strcpy(str_search, "");
			delete[] str_books;
			break;
		case 4:
			Sort_by_Name(books, SIZE);
			cout << "Completed!\n";
			break;
		case 5:
			Sort_by_Author(books, SIZE);
			cout << "Completed!\n";
			break;
		case 6:
			Sort_by_Publishing(books, SIZE);
			cout << "Completed!\n";
			break;
		case 7:
			do
			{
				cout << "Enter the book you want to change?(from 1 to 10)\n";
				cin >> user_input_book;
			} while (user_input_book<1 || user_input>SIZE);

			do
			{
				cout << "Enter choice:\n1 - Change name\n2 - Change author\n3 - Change publishing\n4 - Change genre\n";
				cin >> user_input_choice;
			} while (user_input_choice<1 || user_input_choice>4);

			cin.ignore();
			cout << "Enter what do you want to change in the book(max size 50)\n";
			cin.getline(str_search, 50);
			p_functions_change[user_input_choice - 1](books, str_search, user_input_book-1);
			strcpy(str_search, "");
			cout << "Completed!\n";
			break;
		default:
			cout << "Error!\n";
			break;
		}

	} while (user_input!=-1);

	return 0;
}