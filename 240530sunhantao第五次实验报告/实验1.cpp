#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	void showtime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
	void settime(int h,int m,int s)
	{
		hour = h;
		minute = m;
		sec = s;
	}
};
int main()
{
	Time t1; int h, m, s;        //����t1ΪTime�����
	cin >> h >> m >> s;
	t1.settime(h, m, s);
	t1.showtime();
	return 0;
}
