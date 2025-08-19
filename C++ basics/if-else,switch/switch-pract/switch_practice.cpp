#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;   // use double for division
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nEnter Choice number from the following:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Remainder\n";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << (a + b) << endl;
            break;
        case 2:
            cout << "Result: " << (a - b) << endl;
            break;
        case 3:
            cout << "Result: " << (a * b) << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Result: " << (a / b) << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        case 5:
            if ((int)b != 0)
                cout << "Result: " << ((int)a % (int)b) << endl; // modulus only for integers
            else
                cout << "Error: Modulus by zero!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
