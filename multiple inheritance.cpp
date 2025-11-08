#include <iostream>
using namespace std;
class Teacher {
public:
    void teach() {
        cout << "Teaching students..." << endl;
    }
};
// Base class 2
class Researcher {
public:
    void research() {
        cout << "Conducting research..." << endl;
    }
};
class Professor : public Teacher, public Researcher {
public:
    void guideStudents() {
        cout << "Guiding students in projects and research." << endl;
    }
};
int main() {
    Professor p;
    p.teach();
    p.research();
    p.guideStudents();
    return 0;
}
