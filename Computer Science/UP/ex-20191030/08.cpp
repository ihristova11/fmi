#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	int n = 0;
	std::cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		std::cout << std::setw(2 * i + 1);
		for (size_t j = i; j < n; j++)
		{
			std::cout << j + 1 << " ";
		}
		for (size_t k = n - 1; k > i; k--)
		{
			std::cout << k << " ";
		}

		std::cout << std::endl;
	}

	for (size_t i = n - 1; i > 0; i--)
	{
		std::cout << std::setw(2 * i - 1);

		for (size_t j = i; j <= n; j++)
		{
			std::cout << j << " ";
		}
		for (size_t j = n - 1; j >= i; j--)
		{
			std::cout << j << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}