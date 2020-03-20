#include <iostream>
#include <cmath>
#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(double re, double im)
{
	this->re = re;
	this->im = im;
}

double ComplexNumber::getRe() const
{
	return this->re;
}

double ComplexNumber::getIm() const
{
	return this->im;
}

void ComplexNumber::setRe(double re)
{
	this->re = re;
}

void ComplexNumber::setIm(double im)
{
	this->im = im;
}

double ComplexNumber::mod() const
{
	return sqrt(this->im * this->im + this->re * this->re);
}

bool ComplexNumber::operator!()
{
	return this->re == 0 && this->im == 0;
}

ComplexNumber& ComplexNumber::operator+=(const ComplexNumber& c)
{
	this->im += c.im;
	this->re += c.re;

	return *this;
}

ComplexNumber& ComplexNumber::operator+=(double c)
{
	ComplexNumber res(c, 0);

	this->operator+=(res);

	return *this;
}

ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b)
{
	ComplexNumber res = a;
	res += b;
	return res;
}

ComplexNumber operator+(const ComplexNumber& a, double b)
{
	ComplexNumber res = a;
	res.operator+=(b);
	return res;
}

ComplexNumber operator+(double a, const ComplexNumber& b)
{
	ComplexNumber res = b;
	res.operator+=(a);
	return res;
}
