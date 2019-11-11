#include <iostream>

using namespace std;

int main()
{
	char arr[21];

	cin >> arr;
	
	for (int i = 0; i < 20; i++)
	{
		if (arr[i] == '\0')
		{
			break;
		}

		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			arr[i] += 'A' - 'a';
		}
	}

	cout << arr << endl;

	return 0;
}