#include <iostream>

using namespace std;

int main()
{
	int n1, n2, cnt = 0;
	bool isValid = false;
	int arr1[100];
	int arr2[100];

	cin >> n1 >> n2;

	for (int i = 0; i < n1; i++)
	{
		cin >> arr1[i];
	}

	for (int i = 0; i < n2; i++)
	{
		cin >> arr2[i];
	}

	for (int i = 0; i < n2; i++)
	{
		if (arr1[0] == arr2[i])
		{
			for (int k = 1; k < n1; k++)
			{
				isValid = arr1[k] == arr2[i + k];
			}
		}

		if (isValid)
		{
			++cnt;
			isValid = false;
		}
	}

	cout << cnt << endl;

	return 0;
}