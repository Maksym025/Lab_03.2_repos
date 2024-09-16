//Lab_03.2.cpp
//Малащук Максим
//Лабораторна робота №3.2
//Розгалуження, задане формулою: функція з параметрами
//Варіант 7
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double b;
	double c;
	double a;
	double F;
	cout << " a ="; cin >> a;
	cout << " b ="; cin >> b;
	cout << " c ="; cin >> c;
	cout << " x ="; cin >> x;
	//спосіб 1
	if (x<5 && c!= 0)
		F= - a * (x * x) - b;
	if (x>5 && c== 0)
		F=(x - a) / x;
	else F=(-x / c);
	cout << endl;
	cout << "1) F = " << F << endl;
	//спосіб 2
	if (x < 5 && c != 0)
		F = -a * (x * x) - b;
	else if (x > 5 && c == 0)
		F = (x - a) / x;
	else F = (-x / c);
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}