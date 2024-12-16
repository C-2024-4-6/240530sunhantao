#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int n1 = strlen(s1);
	int n2 = strlen(s2);
	for (int i = 0; i <= n2 - n1; i++)
	{
		int count = 0;
		for (int j = 0; j <n1; j++)
		{
			if (s2[j+i] == s1[j])
			{
				count++;
			}
			else break;
		}
		if (count == n1)return i;
	}
	return -1;
}
int main()
{
	char str1[100];
	char str2[100];
	cout << "Enter the first string: ";
	cin.getline(str1, 100);
	cout << "Enter the second string: ";
	cin.getline(str2, 100);
	cout << "indexOf(\"" << str1 << "\",\"" << str2 << "\") is " << indexOf(str1, str2)<<endl;
}