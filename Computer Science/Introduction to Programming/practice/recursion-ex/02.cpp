#include <iostream>

using namespace std;

double sum(double x, int n)
{
	double res;

	if (n == 1)
	{
		return 1;
	}

	res = x * sum(x, n - 1) + n;

	return res;
}

int main()
{
	double x;
	int n;
	cin >> x >> n;
	cout<<sum(x, n);

	return 0;
}