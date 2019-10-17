#include <iostream>
#include <iomanip>

int main()
{
	int k = 0;

	std::cin >> k;

	std::cout << k / 1000 << " " << k / 100 % 10 << " " << k / 10 % 10 << " " << k % 10 << std::endl;

	return 0;
}