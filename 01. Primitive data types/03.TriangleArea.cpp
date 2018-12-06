//Write a program which asks the user for length of side of a triangle and the corresponding height and prints the area of the triangle.

#include<iostream>

using namespace std;

int main() {
	double a, h;

	do {
		cout << "a: ";
		cin >> a;
	} while (a <= 0);

	do {
		cout << "h: ";
		cin >> h;
	} while (h <= 0);

	cout << "area: " << (a * h) / 2 << endl;
}