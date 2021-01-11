//
// Created by Louis on 01/06/2021
//
// Library class demonstrating partially filled arrays
// Can add/remove books from library
// findbooks in library


#include "library.h"
#include <iostream>

// constructor with default name
Library::Library(const string& Name) {
	libraryName = " ";
}

// destructor
// nothing on heap
Library::~Library() {
	// destructor
}

// true if book found in library
bool Library::isInLibrary(const string& BookName) const {
	for (string book : books)
	{
		if (book == BookName)
		{
			return true;
		}
	}
	return false;

}
//returns valid index if the book is in libary or -1 if not
int Library::findBook(const string& name) const
{
	for (int i = 0; i < MAX; i++)
	{
		if (books[i] == name)
		{
			return i;
		}
	}
	return -1;
}

// add a new book
// return true if successful, false if
// book already in library
bool Library::addBook(const string& BookName) {
	int i = 0;
	//if library is full
	if (numberOfBooks == MAX )
	{
		return false;
	}
	//if book already in library
	if (isInLibrary(BookName) == true)
	{
		cout << BookName << " already in library\n";
		return false;
	}
	//find empty slot in array
	while (books[i] != "")
	{
		i++;
	}
	books[i] = BookName;
	//increase numberOfBooks
	numberOfBooks++;
	return true;
}

// remove a book
// return true if successfully removed
// false if book not in library
bool Library::removeBook(const string& BookName) {
	int replaceBook = 0;
	int lastBook = 0;
	lastBook = numberOfBooks - 1;
	//if book in library perform swap
	if (isInLibrary(BookName) == true)
	{
		replaceBook = findBook(BookName);
		books[replaceBook] = books[lastBook];
		books[lastBook] = "";
		numberOfBooks--;
		return true;
	}
	return false;
}
	

// list all books
void Library::listAllBooks() const {
	for (string name : books)
	{
		if (name != "")
		{
			cout << name << endl;
		}
		
	}
}

ostream& operator<<(ostream& Out, const Library& Lib) {
	
	return Out;
}