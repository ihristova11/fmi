#include <iostream>
#include <cmath>

int main()
{
	int n = 0;
	std::cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		std::cout << pow(n, 4) + 17 * n - 102 << std::endl;
	}

	return 0;
}