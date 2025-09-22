// lab_02.cpp
// Якубович Артур
// Лабораторна робота №2.1
// Лінійні програми
// Варіант 29

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double alpha;
	double beta;
	double z1;
	double z2;
	cout << "alpha = "; cin >> alpha;
	cout << "beta = "; cin >> beta;
	
	z1 = pow(cos(alpha) - cos(beta), 2) - pow(sin(alpha) - sin(beta), 2);
	z2 = -4 * pow(sin(alpha - beta) / 2.0, 2) * cos(alpha + beta);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
}