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
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1 + size2; i++)
	{
		list3[i] = i < size1 ? list1[i] : list2[i - size1];
	}
	sort(list3, size1 + size2);
}
int main()
{
	cout << "Enter list 1: ";
	int n1;
	cin >> n1;
	int* arr1 = new int[n1];
	for (int i = 0; i < n1; i++)
		cin >> arr1[i];
	cout << "Enter list 2: ";
	int n2;
	cin >> n2;
	int* arr2 = new int[n2];
	for (int i = 0; i < n2; i++)
		cin >> arr2[i];
	int* arr = new int[n1 + n2];
	merge(arr1, n1, arr2, n2, arr);
	cout << "The merged list is: ";
	for (int i = 0; i < n1 + n2; i++)
		cout << arr[i] << " ";
	delete[]arr1;
	delete[]arr2;
	delete[]arr;
}