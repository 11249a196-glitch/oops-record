#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollno;
    string name;
    int mark1, mark2, mark3, total;
    float avg;
public:
    void getData() {
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter marks in 3 subjects: ";
        cin >> mark1 >> mark2 >> mark3;
    }
    void calculate() {
        total = mark1 + mark2 + mark3;
        avg = total / 3.0f;
    }
    void display() const {
        cout << "\nRoll No   : " << rollno;
        cout << "\nName      : " << name;
        cout << "\nMark 1    : " << mark1;
        cout << "\nMark 2    : " << mark2;
        cout << "\nMark 3    : " << mark3;
        cout << "\nTotal     : " << total;
        cout << "\nAverage   : " << avg;
        if (mark1 >= 50 && mark2 >= 50 && mark3 >= 50)
            cout << "\nResult    : Pass";
        else
            cout << "\nResult    : Fail";
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].getData();
        students[i].calculate();
    }

    cout << "\n=== Student Information ===\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << i + 1 << ":";
        students[i].display();
    }
}