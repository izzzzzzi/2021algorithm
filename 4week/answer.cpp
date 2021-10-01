#include <iostream>
using namespace std;


void moveZerosToEnd(int arr[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] != 0)
			swap(arr[count++], arr[i]);
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = {6, 0, 8, 2, 3, 0, 4, 0, 1};
	int n = sizeof(arr) / sizeof(arr[0]);

	moveZerosToEnd(arr, n);
	printArray(arr, n);

	return 0;
}
