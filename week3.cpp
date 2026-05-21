// week3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>

#define EP0      +8.85E-12
#define e        -1.602E-19
#define PI 3.14159265

using namespace std;

int main()
{
    double force, a, b, c, d, r;
    a = 1.0;
    b = 4.0 * PI * EP0;
    c = abs(e) * abs(-2 * e);
    d = pow(r, 0.333333);
    d = sqrt(r);
    

    force = (a / b) * (c / d);
    cout << "\n force is: " << force << "newtons";
    force = ((1.0) / (4 * PI * EP0)) * ((abs(e * 2 * e))//(r*r));
    cout << "\n force is:" << force << "N";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
