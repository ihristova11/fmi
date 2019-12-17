#include <iostream>

using namespace std;

int main()
{
	char str1[100];
	char str2[100];

	cin >> str1;
	
	for (int i = 0; i < 100; i++)
	{
		str2[i] = str1[i];
	}

	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;

	return 0;
}