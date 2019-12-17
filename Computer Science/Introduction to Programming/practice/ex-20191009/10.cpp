#include <iostream>
#include <iomanip>

int main()
{
	int p = 0;

	std::cin >> p;

	bool result = p % 2 == 0;
	std::cout << result << std::endl;

	return 0;
}