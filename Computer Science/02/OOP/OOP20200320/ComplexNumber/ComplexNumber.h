#ifndef __COMPLEXNUMBER_H

#define __COMPLEXNUMBER_H

class ComplexNumber {
public:
	ComplexNumber() = default;
	ComplexNumber(double, double);

	// getter
	double getRe() const;
	double getIm() const;

	// setter
	void setRe(double re);
	void setIm(double im);

	double mod() const;

	bool operator!();
	ComplexNumber& operator+=(const ComplexNumber& c);
	ComplexNumber& operator+=(double c);
private:
	double re{ 0 };
	double im{ 0 };
};

ComplexNumber operator+(const ComplexNumber& a, const ComplexNumber& b);
ComplexNumber operator+(const ComplexNumber& a, double b);
ComplexNumber operator+(double a, const ComplexNumber& b);

#endif // !__COMPLEXNUMBER_H
