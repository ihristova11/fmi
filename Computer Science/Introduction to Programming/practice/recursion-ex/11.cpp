#include<iostream>

using namespace std;

int binarySearch(int* a, int start, int end, int n)
{
	int middle = (start + end) / 2;
	if (a[middle] == n) {
		return middle;
	}

	if (a[middle] < n)
	{
		return binarySearch(a, middle + 1, end, n);
	}

	if (a[middle] > n)
	{
		return binarySearch(a, start, end - middle, n);
	}

	return -1;
}

int main()
{
	int a[9] = { 1,2,3,4,5,6,7,8 ,9 };
	cout << binarySearch(a, 0, 9, 2);

	return 0;
}