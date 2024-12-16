#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	cout << "Enter ten numbers: ";
	for (int i = 0; i < 10; i++)
		cin >> arr[i];
	cout << "The distinct numbers are: ";
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <=i; j++)
		{
			if (j == i)cout << arr[i] << " ";
			if (arr[j] == arr[i])break;
		}
	}
}