#include<iostream>;
using namespace std;
int main()
{
	int a = 2,day=1,sum=2;
	while (a < 100)
	{
		sum += a;
		day++;
		a *= 2;
	}
	cout << sum *0.8/ day;
}