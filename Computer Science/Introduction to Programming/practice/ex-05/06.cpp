#include <iostream>

using namespace std;

int rep[256];

int main()
{
	char sent[100];
	int len = 0;
	
	for (int i = 0; i < 100; i++)
	{
		cin >> sent[i];
		if (sent[i] == '!') break;
		++len;
	}

	for (int i = 0; i < len; i++)
	{
		rep[(int)sent[i]]++;
	}

	for (int i = 0; i < 256; i++)
	{
		cout << (char)i << " - " << rep[i] << endl;
	}

	return 0;
}