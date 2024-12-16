#include<iostream>
using namespace std;
class Point
{
private:
	double x, y;
public:
	Point(int x,int y)
	{
		this->x = x;
		this->y = y;
	}
	void setPoint(int i,int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "( " << x << " , " << y <<" )"<< endl;
	}
};
int main()
{
	Point p(60, 80);
	p.display();
	p.setPoint(7, 2);
	p.display();
}