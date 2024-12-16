#include<iostream>
using namespace std;
class ChangFangZhu
{
private:
	double length;
	double width;
	double height;
public:
	void set(double l, double w, double h)
	{
		length = l;
		width = w;
		height = h;
	}
	double caculate()
	{
		return length * width * height;
	}
	void show()
	{
		cout << this->caculate()<<endl;
	}
};
int main()
{
	ChangFangZhu c1, c2, c3;
	double l1, l2, l3, w1, w2, w3, h1, h2, h3;
	cin >> l1 >> w1 >> h1 >> l2 >> w2 >> h2 >> l3 >> w3 >> h3;
	c1.set(l1, w1, h1);
	c2.set(l2, w2, h2);
	c3.set(l3, w3, h3);
	c1.show();
	c2.show();
	c3.show();
}