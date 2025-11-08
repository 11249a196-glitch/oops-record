#include <iostream>
using namespace std;
class Animal {
public:
    void eat() {
        cout << "This animal can eat." << endl;
    }
};
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog can bark." << endl;
    }
};
int main() {
    Dog d;
    d.eat();
    d.bark();
    return 0;
}
