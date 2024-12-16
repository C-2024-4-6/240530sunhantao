#include<iostream>
using namespace std;
int parseHex(const char* a)
{
	int res = 0;
	int n = strlen(a);
	for (int i =0; i <n; i++)
	{
		res *= 16;
		if (isdigit(a[i]))
			res += (a[i] - '0');
		else if (a[i] - 'a' + 1 > 0 && a[i] - 'a' + 1 <=6)
			res+= a[i] - 'a'+10;
		else if (a[i] - 'A' + 1 > 0 && a[i] - 'A' + 1 <= 6)
			res += a[i] - 'A' + 10;
		else
		{
			cout<<"error"<<endl;
			exit(0);
		}
	}
	return res;
}
int main()
{
	cout << parseHex("A5")<<endl;
	cout << parseHex("F4");
}