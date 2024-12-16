#include<iostream>
using namespace std;
int main()
{
	bool arr[100] = { 0 };
	for (int i = 1; i < 101; i++)
	{
		for (int j = i-1; j < 100; j += i)
		{
			arr[j] = abs(arr[j] - 1);
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i])cout << i+1 << " ";
	}
}