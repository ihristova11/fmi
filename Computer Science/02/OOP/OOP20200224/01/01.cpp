#include <iostream>

const unsigned int MaxLength = 128;

enum BookType { Thriller, Horror, Drama };

struct Book {
	char bookName[MaxLength];
	char author[MaxLength];
	BookType bookType;
	double price;
	unsigned int salesNumber;
};

void initialize(Book& b) {

}

void deleteDynamic(Book& b) {

}

int main() {

}