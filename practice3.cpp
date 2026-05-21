// practice3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>

#define PI 3.14159265


using namespace std;

int main() {
    char choice;
    double r, s, volume;

    cout << "Hi I am Bob your friendly Volume calculator\n";

    // 1. Ask for choice with validation
    do {
        cout << "Please enter your choice, [C]ube or [S]phere ";
        cin >> choice;
        choice = tolower(choice);

        if (choice != 'c' && choice != 's') {
            cout << "Invalid choice, Please pick C or S.\n";
        }
    } while (choice != 'c' && choice != 's');

    // 2. Ask for inputs and compute volume
    if (choice == 's') {
        cout << "What is the radius of the sphere ? ";
        cin >> radius;
        volume = (4.0 / 3.0) * PI * pow(radius, 3);
    }
    else {
        cout << "What is the length of the cube ? ";
        cin >> length;
        volume = pow (length, 3);
    }

    // 3. Display Outputs
    cout << fixed << setprecision(3);
    cout << "The volume is: " << volume << endl;

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
