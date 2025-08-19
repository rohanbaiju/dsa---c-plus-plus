/*If-Else

👉 Write a program to check if a number is:

Even or odd.
Positive, negative, or zero. */

#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Find the greatest number
    if (a > b && a > c) {
        cout << a << " is greater than " << b << " and " << c << endl;
    }
    else if (b > a && b > c) {
        cout << b << " is greater than " << a << " and " << c << endl;
    }
    else if (c > a && c > b) {
        cout << c << " is greater than " << a << " and " << b << endl;
    }

    // Check sign of a
    if (a > 0) {
        cout << a << " is positive" << endl;
    }
    else if (a < 0) {
        cout << a << " is negative" << endl;
    }
    else {
        cout << a << " is zero" << endl;
    }

    // Check sign of b
    if (b > 0) {
        cout << b << " is positive" << endl;
    }
    else if (b < 0) {
        cout << b << " is negative" << endl;
    }
    else {
        cout << b << " is zero" << endl;
    }

    // Check sign of c
    if (c > 0) {
        cout << c << " is positive" << endl;
    }
    else if (c < 0) {
        cout << c << " is negative" << endl;
    }
    else {
        cout << c << " is zero" << endl;
    }

    return 0;
}
