#include<iostream>
using namespace std;
int main()
{
	while (1) {
		cout << "input number 1 ,operator and number2:";
		float a, b; char m;
		cin >> a >> m >> b;
		if (int(m) == int('/') && b == 0)
		{
			cout << "invalid";
		}
		else
		{
			switch (int(m))
			{
			case(int('+')):cout << a + b<<endl; break;
			case(int('-')):cout << a - b<<endl; break;
			case(int('*')):cout << a * b<<endl; break;
			case(int('/')):cout << a / b<<endl; break;
			default:cout << "undefined operator"<<endl; break;
			}
		}
	}
}