#include<iostream>
#include"mytemperature.h"
#include<iomanip>
#include "mytemperature.cpp"
using namespace std;
int main()
{
	cout << "Celsius" << "\t" << "Fahrenheit" << "\t" << "|" << "\t" << "Fahrenheit" << "\t" << "Celsius" << endl;
	double arr[] = { 40.0,120.0,39.0,110.0,31.0,30.0 };
	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			cout <<fixed<< setprecision(1) << arr[i] << "\t"<< celsius_to_fah(arr[i]) << "\t\t"<< "|";
		else cout << "\t"<< arr[i] << "\t\t" <<setprecision(2)<< fahrenheit_to_cels(arr[i]) << endl;
	}
}
