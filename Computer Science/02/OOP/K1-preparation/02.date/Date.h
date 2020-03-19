#ifndef __Date_H
#define __Date_H

class Date {
public:
	Date();
	Date(const Date& d);
	Date(int d, int m, int y);

	int getDay() const;
	int getMonth() const;
	int getYear() const;

	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);

	void print(std::ostream out);
	bool isBefore(const Date& d);

	~Date();

private:
	int day;
	int month;
	int year;
};
#endif