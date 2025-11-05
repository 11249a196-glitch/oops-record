#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    // Constructor
    MyString(string s = "") {
        str = s;
    }

    // Overload '+' operator to concatenate two strings
    MyString operator+(const MyString &obj) const {
        MyString temp;
        temp.str = str + obj.str; // Concatenation
        return temp;
    }

    // Function to display the string
    void display() const {
        cout << str;
    }
};

int main() {
    MyString s1("Hello ");
    MyString s2("World!");

    cout << "String 1: ";
    s1.display();
    cout << "\nString 2: ";
    s2.display();

    // Using overloaded '+' operator
    MyString s3 = s1 + s2;

    cout << "\n\nAfter concatenation:\n";
    s3.display();
    cout << endl;

    return 0;
}
