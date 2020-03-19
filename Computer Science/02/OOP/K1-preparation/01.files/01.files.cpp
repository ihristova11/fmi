#include <iostream>
#include <fstream>

using namespace std;

struct Point2D {
public:
	Point2D(double xValue = 0, double yValue = 0);
	void print();
private:
	double x;
	double y;
};

Point2D::Point2D(double xValue, double yValue)
{
	this->x = xValue;
	this->y = yValue;
}

void Point2D::print()
{
	cout << "(" << this->x << "," << this->y << ")" << endl;
}

struct Person {
	char name[50];
	int age;
	char phone[24];
};

int main()
{
	//Person me = { "Irina", 20, "hard to tell" };

	//ofstream outfile("D:\Git\FMI\Computer Science\02\OOP\K1-preparation\test.txt", ios::out | ios::binary); 

	//outfile.write((char*)& me, sizeof(me));
	Point2D firstPoint;
	Point2D points[10] = { firstPoint, Point2D(2), 3, 4, 5, 6, 7, 8, 9, 10 };

	Point2D* arr = new Point2D[5];
	arr[0].print();

	return 0;
}