#include <iostream>
#include <iomanip>

int main()
{
	int x = 0;
	int odd = 0;
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> x;

		odd ^= x;
	}

	std::cout << odd << std::endl;

	return 0;
}