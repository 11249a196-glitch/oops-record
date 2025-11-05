#include <iostream>
using namespace std;
class Number {
private:
    int x, y;

public:
    // Constructor
    Number(int a = 0, int b = 0) {
        x = a;
        y = b;
    }
    // Function to display the values
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
    // Overloading the unary minus (-) operator
    void operator-() {
        x = -x;
        y = -y;
    }
};
int main() {
    Number n1(10, -20);
    cout << "Before overloading operator (-): ";
    n1.display();
    // Apply overloaded minus operator
    -n1;
    cout << "After overloading operator (-): ";
    n1.display();
    return 0;
}
