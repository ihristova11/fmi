#include <iostream>
#include <iomanip>

int main()
{
	double m = 0;
	double n = 0;

	std::cin >> m >> n;
	std::cout << std::fixed << std::setprecision(7) << m / n << std::endl;

	return 0;
}