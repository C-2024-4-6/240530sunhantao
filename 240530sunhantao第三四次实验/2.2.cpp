#include<iostream>
using namespace std;
void sort(double* a,int size)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				double temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed);
}
int main()
{
	double arr[10] = {3.14,2.71,6.44,5.2,3.66,9.18,9.26,4.23,6.1,7.23};
	sort(arr, 10);
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";
}