#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:"<< testUnint << endl;//<<oct;"
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type: "<< static_cast<short>(testUnint) << endl;//为什么结果为-2?:
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	cout << "以八进制输出:" << oct << testUnint << endl;
	cout << "输入一个实数:" << endl;
	float n;
	cin >> n;
	cout << "n 转为整型后输出为:" << static_cast<int>(n);
	system("pause");
	return 0;
}