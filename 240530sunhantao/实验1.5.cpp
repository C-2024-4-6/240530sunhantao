#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << "input 华氏温度:";
	float h, s;
	cin >> h;
	s = (h - 32) / 1.8;
	cout << "对应的摄氏温度是:" <<fixed<<setprecision(2)<< s;
}