#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] - 'a' + 1 >= 1 && s[i] - 'a' + 1 <= 26)
			counts[s[i] - 'a']++;
		if (s[i] - 'A' + 1 >= 1 && s[i] - 'A' + 1 <= 26)
			counts[s[i] - 'A']++;
	}
}
int main()
{
	int counts[26] = { 0 };
	char str[100];
	cout << "Enter a string: ";
	cin.getline(str, 100);
	count(str, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
			cout << char(i + int('a')) << ":" <<counts[i]<< " times" << endl;
	}
}