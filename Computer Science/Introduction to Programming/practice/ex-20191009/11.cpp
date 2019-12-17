#include <iostream>
#include <stack>
int main()
{
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