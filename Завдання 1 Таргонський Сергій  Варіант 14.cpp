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
    const double PI = 3.141592653589793;
    float R = 1740., S, V;

    S = 4. * PI * R * R;
    V = 4 * PI * pow(R, 3) / 3.;
    cout << " \nВаріант 14 " << "\n";
    cout.precision(0);
    cout << fixed << "Площа поверхні: " << S << " км^2"
        << "\nОб'єм: " << V << " км^3" << "\n";

    system("pause");
    return 0;
}