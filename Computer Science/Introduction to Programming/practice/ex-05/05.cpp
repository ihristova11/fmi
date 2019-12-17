#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char str1[100], str2[100];
	cin >> str1 >> str2;

	cout << strcmp(str1, str2) << endl;

	return 0;
}