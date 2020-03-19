#include <iostream>
#include "Date.h"

int main()
{
	return 0;
}

Date::Date()
{
	this->day = 1;
	this->month = 1;
	this->year = 1990;
}

Date::Date(const Date& d)
{

}

Date::Date(int d, int m, int y)
{
	this->day = d;
	this->month = m;
	this->year = y;
}

int Date::getDay() const
{
	return this->day;
}

int Date::getMonth() const
{
	return this->month;
}

int Date::getYear() const
{
	return this->year;
}

void Date::setDay(int day)
{
	this->day = day;
}

void Date::setMonth(int month)
{
	this->month = month;
}

void Date::setYear(int year)
{
	this->year = year;
}

void Date::print(std::ostream out)
{
	out << "dd: " << this->day << "mm: " << this->month << "yyyy: " << this->year << std::endl;
}

bool Date::isBefore(const Date& d)
{
	if (this->year < d.year)
	{
		return true;
	}
	else if (this->year == d.year)
	{
		if (this->month < d.month)
		{
			return true;
		}
		else if(this->month == d.month)
		{
			if (this->day < d.day)
			{
				return true;
			}
		}
	}

	return false;
}

Date::~Date()
{
}
