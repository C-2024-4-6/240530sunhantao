#include<iostream>
using namespace std;
int gongyue(int m, int n)
{
	int a = m > n ? n : m;
	for (int i = n / 2; i >= 1; i--)
	{
		if (n % i == 0 && m % i == 0)
			return i;
	}
}
int gongbei(int m,int n)
{
	return (m * n) / gongyue(m, n);
}
int main()
{
	int m, n;
	cout << "Input: ";
	cin >> m >> n;
	cout << "最大公约数:" << gongyue(m, n) << endl;
	cout << "最小公倍数:" << gongbei(m, n) << endl;
}