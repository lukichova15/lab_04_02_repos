// Lab_04_1.cpp
// Лукічова Катерина
// Лабораторна робота No 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 12
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp; // х початкове
	cout << "xk = "; cin >> xk; // х кінцеве
	cout << "dx = "; cin >> dx; // крок
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = (2 + x) / (x*x) + 1;
		if (x<0)
			B = x*x*x - 2 * x*x*x*x;
		else
		if (x>2)
			B = 4 * cos(x*x - 2);
		else
			B = (abs(x) + exp(x))*(abs(x) + exp(x))*(abs(x) + exp(x));
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	cin >> dx;
	return 0;
}
