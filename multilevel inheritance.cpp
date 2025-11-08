#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "This animal can eat." << endl;
    }
};
// Derived class (inherits from Animal)
class Mammal : public Animal {
public:
    void walk() {
        cout << "This mammal can walk." << endl;
    }
};
// Derived class (inherits from Mammal)
class Dog : public Mammal {
public:
    void bark() {
        cout << "The dog can bark." << endl;
    }
};
// Main function
int main() {
    Dog d;
    // Accessing functions from all classes
    d.eat();   // from Animal
    d.walk();  // from Mammal
    d.bark();  // from Dog
    return 0;
}
