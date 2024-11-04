#include<iostream>
using namespace std;
int main() 
{
	cout << "input a number:";
	float a;
	cin >> a;
	float x1(a), x2((x1+a/x1)/2);
	while (abs(x1 - x2) > 10e-5)
	{
		x1 = x2;
		x2 =  (x1 + a / x1)/2;
	}
	cout << x2;
}