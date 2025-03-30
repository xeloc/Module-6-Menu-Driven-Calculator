#include <iostream>
using namespace std;

// function definitions

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
    return a / b;
}
int modulo(int a, int b) {
    if (b == 0) {
        cout << "Error! Modulo by zero." << endl;
        return 0;
    }
    return a % b;
}

void calculator() {
    while (true) {
        cout << "\n===== Calculator Menu =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulo" << endl;
        cout << "6. Exit" << endl;

        int choice;
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 6) {
            cout << "Exiting program..." << endl;
            break;
        }

        if (choice >= 1 && choice <= 5) {
            double num1, num2;
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 5:
                if (static_cast<int>(num1) == num1 && static_cast<int>(num2) == num2)
                    cout << "Result: " << modulo(static_cast<int>(num1), static_cast<int>(num2)) << endl;
                else
                    cout << "Error! Modulo operation requires integers." << endl;
                break;
            }
        }
        else {
            cout << "Invalid choice! Please select a valid option." << endl;
        }
    }
}

int main() {
    calculator();
    return 0;
}
