#include <iostream>
using namespace std;
int peach(int n) 
{
    if (n == 10) {
        return 1;
    }
    return (peach(n + 1) + 1) * 2;
}
int main() {
    cout << "��һ����ӹ�ժ��������Ϊ: " << peach(1) << endl;
    return 0;
}