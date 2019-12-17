#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(char* ptr, int l, int len)
{
	if (l == len / 2)
	{
		return true;
	}

	if (ptr[l] != ptr[len - l - 1])
	{
		return false;
	}

	return isPalindrome(ptr, l + 1, len);

}

int main()
{
	char s[] = "bqlhlqb";
	cout << boolalpha << isPalindrome(s, 0, strlen(s));
	return 0;
}