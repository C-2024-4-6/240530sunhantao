#pragma once
using namespace std;
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              
{
public:                   
	void display();
	void set_value(int a,string b,char c);
private:
	int num;
	char name[20];
	char sex;
};
