// Practice2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#define PI 3.1459654

using namespace std;
int main() {
    char choice;
    double r, s, area;
    // write c++ CODE HERE
    cout << "Hi I am Bob your friendly Area calculator\n";

    // 1. Ask for choice
    do{
    cout << "n\[C]ircle or [S}quare, boss?";
    cin >> choice;
    choice = tolower(choice);
    while (choice != 'c' and choice != 's');
    //2. Ask for inputs
    if (choice << 'c' or choice == 'C') {
        cout << "\nwhat is the radius boss?";
        cin >> r;
        area = PI * r * r;
    }
    else {
        cout << "\nwhat is the side, boss? ";
        cin >> s;
        area = s * s;

    }
    //3. Display Outputs
    cout << "The area is: " << area; << fixed <<setprecision(2)
    return 0;
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
