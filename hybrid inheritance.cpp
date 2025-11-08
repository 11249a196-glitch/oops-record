#include <iostream>
using namespace std;
// Base class
class Person {
public:
    void getInfo() {
        cout << "This is a person." << endl;
    }
};
// Derived from Person
class Student : public Person {
public:
    void study() {
        cout << "The student is studying." << endl;
    }
};
// Another base class
class Employee {
public:
    void work() {
        cout << "The employee is working." << endl;
    }
};
// Derved from both Student and Employee
class WorkingStudent : public Student, public Employee {
public:
    void manageTime() {
        cout << "The working student manages time between study and work." << endl;
    }
};
// Main function
int main() {
    WorkingStudent ws;
    // Access methods from all parent classes
    ws.getInfo();     // from Person
    ws.study();       // from Student
    ws.work();        // from Employee
    ws.manageTime();  // from WorkingStudent
    return 0;
}
