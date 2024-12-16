#include<iostream>
using namespace std;
void sort(int* a, int size)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed);
}
int main()
{
	int n;
	cout << "Enter the size: ";
	cin >> n;
	int* arr = new int[n];
	cout << "Enter the element: ";
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, n);
	for (int i = 0; i < n; i++)
		cout << *(arr+i) << " ";
	cout << endl;
}