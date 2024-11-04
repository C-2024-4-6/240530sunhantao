#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "input 2 numbers:";
	cin >> a >> b;
		int min(0), max(0), i;
		for (i = 1; i <((a<b)?a:b); i++)
		{
			if (a % i == 0 && b % i == 0)
				max = i;
		}
		cout << "最小公因数：" << max;
		i = 1;
		for ( i = 1; i <= b; i++)
		{
			if ((a * i) % b == 0)
			{
				min = a * i; break;
			}
		}
		cout << "最小公倍数：" << min;
}