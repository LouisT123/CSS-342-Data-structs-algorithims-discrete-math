//
// Created by Louis Taing on 01/06/2021.
//

#ifndef ASS1_LIBRARY_H
#define ASS1_LIBRARY_H

#include <string>
//maximum amount of books
static const int MAX = 100;

using namespace std;

// Library holds books - can add, remove and list books
class Library {
	// display all books in library
	friend ostream& operator<<(ostream& Out, const Library& Lib);

public:
	// constructor with default name
	explicit Library(const string& Name);

	// destructor
	virtual ~Library();

	// add a new book
	// return true if successful, false if
	// book already in library
	bool addBook(const string& BookName);

	// remove a book
	// return true if successfully removed
	// false if book not in library
	bool removeBook(const string& BookName);

	// list all books
	void listAllBooks() const;

	// true if book found in library
	bool isInLibrary(const string& BookName) const;


private:

	string libraryName;
	//array
	string books[MAX];
	//keep track of how many books in library
	int numberOfBooks = 0;
	
	int findBook(const string& name) const;
	
};

#endif  // ASS1_LIBRARY_H
