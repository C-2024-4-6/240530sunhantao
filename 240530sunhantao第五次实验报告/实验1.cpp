#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
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
	Time t1; int h, m, s;        //定义t1为Time类对象
	cin >> h >> m >> s;
	t1.settime(h, m, s);
	t1.showtime();
	return 0;
}
