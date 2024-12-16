#include<iostream>
using namespace std;
bool is_prime(int n)
{
	if (n == 0 || n == 1)return 0;
	for (int i = 2; i <= n; i++)
	{	
		if (i ==n)return 1;
		if (n % i == 0)return 0;
	}
}
int main()
{
	int count = 0;
	int i = 0;
	while (count < 200)
	{
		if (is_prime(i))
		{
			cout << i << " ";
			count++;
			if (count % 10 == 0)cout << endl;
		}
		i++;
	}
}