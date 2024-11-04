#include<iostream>
using namespace std;
int main()
{
	char m[100];
	cin.getline(m, 100);
	int zimu(0), fuhao(0), shuzi(0), kongge(0);
	for (int i = 0; int(m[i])!= int('\0'); i++)
	{
		if (isalpha(int(m[i]))) zimu += 1;
		if (isdigit(int(m[i]))) shuzi += 1;
		if (isspace(int(m[i])))	kongge += 1;
		if (ispunct(int(m[i]))) fuhao += 1;
	}
	cout << "字母" << zimu << "个";
	cout << "数字" << shuzi<< "个";
	cout << "空格" << kongge<< "个";
	cout << "符号" << fuhao << "个";
}