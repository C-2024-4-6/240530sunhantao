#include<iostream>
using namespace std;
int main()
{
	while (1)
	{
		cout << "Input a char:";
		char i;
		cin >> i;
		if (i <= 'z' && i >= 'a')
		{
			cout << char(i + 'A' - 'a') << endl;
		}
		else cout << i + 1 << endl;
	}
}