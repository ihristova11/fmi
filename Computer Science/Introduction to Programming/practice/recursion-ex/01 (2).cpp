#include <iostream>

using namespace std;

int* convertToBinaryReversed(int* result, int n, int c)
{
	if (n <= 1)
	{
		result[c] = 1;
		return result;
	}

	result[c] = n % 2;
	n = n / 2;
	++c;

	return convertToBinaryReversed(result, n, c);
}

void toBinary(int n)
{
	if (n == 0)
	{
		return;
	}

	toBinary(n / 2);
	cout << n % 2;
}

int main()
{
	int result[10] = { 0 };
	int number = 10;
	toBinary(10);

	convertToBinaryReversed(result, number, 10);

	return 0;
}