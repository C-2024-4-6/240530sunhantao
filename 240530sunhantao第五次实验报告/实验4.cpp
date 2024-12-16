#include<iostream>
using namespace std;
class Student
{
public:
	int score;
	string num;
	void set(int s, string num)
	{
		score = s;
		this->num = num;
	}
};
void max(Student *arr,int n)
{
	int m=0,j=0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i].score > m)
		{
			m = arr[i].score;
			j = i;
		}
	}
	cout << arr[j].num<<endl;
}
int main()
{
	Student arr[5];
	for (int i = 0; i < 5; i++)
	{
		int a; string b;
		cin >> a >> b;
		arr[i].set(a, b);
	}
	max(arr, 5);
}