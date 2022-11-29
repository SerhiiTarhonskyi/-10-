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
    double x, p, a, y, b;
    x = 11;
    cout << "Варіант 14" << "\n";
    cout << "Введіть значення другого параметра: " << "\n";
    cin >> p;
    b = x + pow(p, 3);
    cout << "b: " << b << "\n";
    a = log(abs(x));
    cout << "a: " << a << "\n";
    y = sqrt(x) * sin(a) + sqrt(b) * cos(x);
    cout << "y: " << y << "\n";



}