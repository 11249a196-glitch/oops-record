#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "All animals eat food." << endl;
    }
};
// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};
// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "The cat meows." << endl;
    }
};
// Derived class 3
class Cow : public Animal {
public:
    void moo() {
        cout << "The cow moos." << endl;
    }
};
// Main function
int main() {
    Dog d;
    Cat c;
    Cow w;
    cout << "--- Dog ---" << endl;
    d.eat();
    d.bark();
    cout << "\n--- Cat ---" << endl;
    c.eat();
    c.meow();
    cout << "\n--- Cow ---" << endl;
    w.eat();
    w.moo();
    return 0;
}
