
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
	double m, y, z;
	cout << "Варіант 14 \nВведіть значення параметру y: ";
	cin >> y;
	cout << "Введіть значення параметру m: ";
	cin >> m;
	if ((cos(2 * y) + 3.6) == 0)

	{
		cout << "y не задовольняє область визначення";
		return 0;

	}
	z = (pow(m, 2) + 2.8 * m + 0.355) / (cos(2 * y) + 3.6);
	cout << "Значення виразу: " << z;


}