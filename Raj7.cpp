#include <iostream>
using namespace std;

// Inline function definition
inline int square(int x) {
    return x * x;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "The square of " << num << " is: " << square(num) << endl;

    // Calling inline function multiple times
    cout << "Square of 5: " << square(5) << endl;
    cout << "Square of 10: " << square(10) << endl;
    cout << "Square of 15: " << square(15) << endl;

    return 0;
}
