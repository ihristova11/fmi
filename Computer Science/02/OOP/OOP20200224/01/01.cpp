#include <iostream>
#include <cstring>

const unsigned int MaxLength = 128;

enum BookType { Thriller, Horror, Drama };

// task 01
struct Book {
	char* name;
	char* author;
	BookType bookType;
	double price;
	unsigned int salesNumber;
};

// task 02
void initialize(Book& b) {
	char bookName[MaxLength];
	char author[MaxLength];
	int type;

	// name
	std::cout << "Enter name: ";
	std::cin.ignore();
	std::cin.getline(bookName, 127);
	b.name = new char[strlen(bookName)];
	strcpy(b.name, bookName);

	// author
	std::cout << "Enter author: ";
	std::cin.getline(author, 127);
	b.author = new char[strlen(author)];
	strcpy(b.author, author);

	// type
	std::cout << "Enter book type (0-3): "; // todo: check if valid
	std::cin >> type;
	b.bookType = (BookType)(type);

	// price
	std::cout << "Enter price: ";
	std::cin >> b.price;

	// sales number
	std::cout << "Enter sales number: ";
	std::cin >> b.salesNumber;
}

void deleteDynamic(Book& b) {
	delete[] b.author;
	delete[] b.name;
}

// task 03
void initBookArray(int n, Book arr[]) {
	for (int i = 0; i < n; i++)
	{
		initialize(arr[i]);
	}
}

// task 04
void print(const Book& b) {
	std::cout
		<< "Name: " << b.name << " "
		<< std::endl << "Author: " << b.author << " "
		<< std::endl << "Price: " << b.price << " "
		<< std::endl << "Type: " << b.bookType << " "
		<< std::endl << "Sold copies: " << b.salesNumber 
		<< std::endl;
}

void printAll(int n, Book arr[]) {
	for (int i = 0; i < n; i++)
	{
		print(arr[i]);
	}
}

// task 05
void printBookWithLowestPrice(Book* books, size_t count) {
	Book* lowest = books;
	for (size_t i = 0; i < count - 1; i++)
	{
		lowest = ((books + i)->price < (books + i + 1)->price)
			? (books + i)
			: (books + i + 1);
	}
	print(*lowest);
}

void printBookWithHighestPrice(Book* books, size_t count) {
	Book* highest = books;
	for (size_t i = 0; i < count - 1; i++)
	{
		highest = ((books + i)->price > (books + i + 1)->price)
			? (books + i)
			: (books + i + 1);
	}
	print(*highest);
}

//task 07
Book& getBestBook(Book* books, size_t count) {
	Book* best = books;
	for (size_t i = 0; i < count - 1; i++)
	{
		best = ((books + i)->salesNumber > (books + i + 1)->salesNumber)
			? (books + i)
			: (books + i + 1);
	}
	return *best;
}

int main() {
	Book arr[MaxLength];
	int n;

	std::cin >> n;

	initBookArray(n, arr);
	std::cout << std::endl;
	printAll(n, arr);

	std::cout << std::endl;
	printBookWithLowestPrice(arr, n);

	std::cout << std::endl;
	printBookWithHighestPrice(arr, n);

	std::cout << std::endl;
	print(getBestBook(arr, n));
}