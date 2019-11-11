#include <iostream>

using namespace std;

int main()
{
	char arr1[100];
	char arr2[100];
	char temp[3];

	cin >> arr1 >> arr2;

	if (strcmp(arr1, arr2) == 1)
	{
		cout << strlen(arr1) << " ";
		for (int i = 0; i < 3; i++)
		{
			temp[i] = arr2[i];
			arr2[i] = arr1[i];
			arr1[i] = temp[i];
		}
		cout << arr1 << endl;;
	}
	else // intentionally repeting logic
	{
		cout << strlen(arr2) << " ";
		for (int i = 0; i < 3; i++)
		{
			temp[i] = arr1[i];
			arr1[i] = arr2[i];
			arr2[i] = temp[i];
		}
		cout << arr2 << endl;;
	}

	return 0;
}