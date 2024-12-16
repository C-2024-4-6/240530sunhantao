#pragma once
using namespace std;
//student.h                (这是头文件，在此文件中进行类的声明)
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
