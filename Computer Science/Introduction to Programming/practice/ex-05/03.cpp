#include <iostream>

using namespace std;

int main()
{
	char arr[100];
	int len = 0;

	cin >> arr;

	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == '\0') break;
		len++;
	}

	cout << len << endl;

	return 0;
}