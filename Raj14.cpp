#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input two integers
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    // Demonstrate comparison operators
    cout << "\n--- Comparison Results ---\n";

    cout << "a == b : " << (a == b) << endl;  // Equal to
    cout << "a != b : " << (a != b) << endl;  // Not equal to
    cout << "a > b  : " << (a > b) << endl;   // Greater than
    cout << "a < b  : " << (a < b) << endl;   // Less than
    cout << "a >= b : " << (a >= b) << endl;  // Greater than or equal to
    cout << "a <= b : " << (a <= b) << endl;  // Less than or equal to

    return 0;
}
