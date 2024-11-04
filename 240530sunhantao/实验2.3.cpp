#include<iostream>
using namespace std;
int main()
{
	while (1) {
	flag:
		cout << "input 三边:";
		int a, b, c;
		cin >> a >> b >> c;
		if (a >= b + c || b >= a + c || c >= a + b)
		{
			cout << "不构成三角形" << endl;
			goto flag;
		}
		cout << "周长为" << a + b + c << endl;
		if (a == b || b == c || c == a)
			cout << "等腰三角形" << endl;
		else cout << "不是等腰三角形" << endl;
	}
}