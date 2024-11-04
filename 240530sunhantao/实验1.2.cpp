#include<iostream>
using namespace std;
const float pi = 3.14;
int main()
{
	float v,h,r;
	cout << "Input h then r: ";
	cin >> h >> r;
	v = pi * r * r * h / 3;
	cout << "v is" << v;
}