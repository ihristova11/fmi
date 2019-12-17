#include <iostream>

using namespace std;

int fib(int n)
{
	cout << n << endl;
	if (n >= 1 && n <= 2)
	{
		return 1;
	}

	return fib(n - 1) + fib(n - 2);
}


int find_min(int* arr, int n)
{
	int subArrayMin;

	if (n == 1)
	{
		return arr[0];
	}
	subArrayMin = find_min(arr, n - 1);

	if (subArrayMin < arr[n - 1])
	{
		return subArrayMin;
	}

	return arr[n - 1];
}

double min(double* a, int ind)
{
	double temp;
	if (ind == 4)
	{
		return a[4];
	}
	temp = min(a, ++ind);

	if (temp < a[ind])
	{
		return temp;
	}

	return a[ind];
}

int main() {

	double arr[5] = { 1.2,2,33,7.4,-5 };
	cout << min(arr, 0) << endl;
	
	return 0;
}