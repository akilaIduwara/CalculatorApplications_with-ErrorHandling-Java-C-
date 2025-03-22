#include <iostream>
#include <limits> // For clearing invalid input
using namespace std;

// Function to check if input is valid
bool isValidInput() {
    if (cin.fail()) {
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        return false;
    }
    return true;
}

// Function to handle division by zero
int Division(int first, int second) {
    if (second == 0) {
        throw runtime_error("Error: Division by zero is not allowed!");
    }
    return first / second;
}

// Function to handle modulus by zero
int Modulus(int first, int second) {
    if (second == 0) {
        throw runtime_error("Error: Modulus by zero is not allowed!");
    }
    return first % second;
}

int main() {
    int first = 0;
    int second = 0;
    int sw = 0;

    cout << "Welcome!\n";

    // Get the first number
    while (true) {
        cout << "Enter the first number: ";
        cin >> first;
        if (isValidInput()) {
            break;
        }
        cout << "Invalid input! Please enter a number.\n";
    }

    // Get the second number
    while (true) {
        cout << "Enter the second number: ";
        cin >> second;
        if (isValidInput()) {
            break;
        }
        cout << "Invalid input! Please enter a number.\n";
    }

    // Display operation choices
    cout << "01. Addition\n"
         << "02. Subtraction\n"
         << "03. Multiplication\n"
         << "04. Division\n"
         << "05. Modulus\n";

    // Get the operation choice
    while (true) {
        cout << "Enter the number for the process (1-5): ";
        cin >> sw;
        if (isValidInput() && sw >= 1 && sw <= 5) {
            break;
        }
        cout << "Invalid choice! Please enter a number between 1 and 5.\n";
    }

    // Perform the selected operation
    try {
        switch (sw) {
            case 1: {
                cout << "Addition = " << first + second << endl;
                break;
            }
            case 2: {
                cout << "Subtraction = " << first - second << endl;
                break;
            }
            case 3: {
                cout << "Multiplication = " << first * second << endl;
                break;
            }
            case 4: {
                cout << "Division = " << Division(first, second) << endl;
                break;
            }
            case 5: {
                cout << "Modulus = " << Modulus(first, second) << endl;
                break;
            }
        }
    } catch (const runtime_error &e) {
        cout << e.what() << endl; // Handle division by zero or modulus by zero
    }

    return 0;
}