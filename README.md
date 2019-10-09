# FMI

Faculty of Mathematics and Informatics, Sofia University | Computer Science
- Homeworks and exercises
- Lectures and materials

## ex 01: 
```#include <iostream>
#include <iomanip>
#include <stack>

int main()
{
	// 1
	std::cout << "Irina" << std::endl;

	// 2
	int a = 0;
	int b = 0;

	std::cin >> a >> b;

	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a % b << std::endl;
	std::cout << a / b << std::endl;


	// 3 
	int x = 0;
	int y = 0;
	int temp = 0;

	std::cin >> x >> y;
	temp = a;
	a = b;
	b = temp;

	std::cout << a << " " << b << std::endl;


	// 4
	double r = 0;

	std::cin >> r;

	std::cout << 2 * 3.14 * r << " " << r * r * 3.14 << std::endl;


	// 5 
	double d = 0;

	std::cin >> d;

	std::cout << (int)d << std::endl;

	// 6
	double m = 0;
	double n = 0;
	std::cin >> m >> n;
	std::cout << std::fixed << std::setprecision(7) << m / n << std::endl;


	// 7

	int k = 0;

	std::cin >> k;

	std::cout << k / 1000 << " " << k / 100 % 10 << " " << k / 10 % 10 << " " << k % 10 << std::endl;

	// 8
	int arr[5] = { 1,1,3,5,3 };
	int max = INT_MIN;
	int index = 0;

	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> arr[i];

		if (max < arr[i])
		{
			max = arr[i];
			index = i;
		}
	}

	std::cout << arr[index] << std::endl;

	// 8 - faster
	int x = arr[0];
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << (arr[i] ^ arr[i + 1]) << std::endl;
		std::cout << std::endl;
		x ^= arr[i + 1];
		std::cout << x << std::endl;
	}


	// 9
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
	} while ( l != 2);

	std::cout << res << std::endl;

	// 10
	int p = 0;

	std::cin >> p;

	bool result = p % 2 == 0;
	std::cout << result << std::endl;

	// 11

	int l = 0;
	std::cin >> l;
	std::stack<int> stack;
	do
	{
		stack.push(l % 2);
		l /= 2;
	} while (l != 0);

	while (!stack.empty())
	{
		std::cout << stack.top();
		stack.pop();
	}

	return 0;
}
```
