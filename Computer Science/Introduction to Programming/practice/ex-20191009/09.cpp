#include <iostream>
#include <iomanip>

int main()
{
	int l = 0;
	bool res = true;

	std::cin >> l;

	do
	{
		if (l % 2 != 0)
		{
			res = false;
			break;
		}
		l /= 2;
	} while (l != 2);

	std::cout << res << std::endl;
	
	return 0;
}