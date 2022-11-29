#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Варіант 14\n";
	int i = 14;
	double ab = sqrt(pow(i - 0, 2) + pow(i - 1 - 0, 2));
	cout << "Сторона AB: " << ab << "\n";
	double bc = sqrt(pow(i + i, 2) + pow(i + 1 - i - 1, 2));
	cout << "Сторона BC: " << bc << "\n";
	double ca = sqrt(pow(-i - 0, 2) + pow(i + 1 - 0, 2));
	cout << "Сторона CA: " << ca << "\n";
	double m = sqrt(2 * pow(ab, 2) + 2 * pow(ca, 2) - pow(bc, 2)) / 2;
	cout << "Медіанна Ma: " << m << "\n";
	double p = (ab + bc + ca) / 2;
	double R = (ab + bc + ca) / (4 * sqrt(p * (p - ab) * (p - bc) * (p - ca)));
	cout << "Радіус описаного кола R: " << R << "\n";

}