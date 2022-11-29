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
    double a, z1, z2;
    cout << " \nВаріант 14 " << "\n";
    cout << "Введыть a: ";
    cin >> a;
    z1 = (cos(a) + sin(a)) / (cos(a) - sin(a));
    cout << "z1: " << z1 << "\n";
    z2 = (tan(2 * a) + (1 / cos(2 * a)));
    cout << "z2: " << z2 << "\n";




}