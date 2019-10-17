#include <iostream>

int main()
{
	int x = 0;
	int y = 0;
	int temp = 0;

	std::cin >> x >> y;
	temp = x;
	x = y;
	y = temp;

	std::cout << x << " " << y << std::endl;

	return 0;
}