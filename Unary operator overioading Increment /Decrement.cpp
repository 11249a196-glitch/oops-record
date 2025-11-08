#include <iostream>
using namespace std;
class Counter {
private:
    int value;
public:
    Counter(int v = 0) {
        value = v;
    }
    void display() {
        cout << "Value = " << value << endl;
    }
    Counter operator++() {
        ++value;
        return *this; 
    }
    Counter operator++(int) {
        Counter temp = *this; 
        return temp; 
    }
    Counter operator--() {
        --value;
        return *this;
    }
    Counter operator--(int) {
        Counter temp = *this;
        value--;
        return temp;
    }
};

int main() {
    Counter c1(10);

    cout << "Initial: ";
    c1.display();
    ++c1; 
    cout << "After prefix increment (++c1): ";
    c1.display();
    c1++;t
    cout << "After postfix increment (c1++): ";
    c1.display()
    --c1; 
    cout << "After prefix decrement (--c1): ";
    c1.display();
    c1--; 
    cout << "After postfix decrement (c1--): ";
    c1.display();
    return 0;
}
