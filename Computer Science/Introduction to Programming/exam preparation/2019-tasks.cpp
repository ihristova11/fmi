#include <iostream>
using namespace std;
long sum(long n)
{
	long p = 1, res = 0;

	for (long i = 2; i <= n + 1; i++)
	{
		for (long j = i - 1; j <= 2 * i - 2; j++)
		{
			p *= j;
			cout << j << "*";
		}
		cout << "+";
		res += p;
		p = 1;
	}

	return res;
}

bool checkS(double* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (i % 2 == 0 && a[i] <= a[i + 1])
		{
			return false;
		}

		if (i % 2 == 1 && a[i] >= a[i + 1])
		{
			return false;
		}
	}

	return true;
}

bool isPal(char* s, int i, int j)
{
	if (i >= j)
	{
		return true;
	}

	return s[i] == s[j] && isPal(s, i + 1, j - 1);
}

void update(int* m, int ind, int len, int x, int y)
{
	if (ind >= len) return;
	if (m[ind] == x) m[ind] = y;

	update(m, ind + 1, len, x, y);
}
