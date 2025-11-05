#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    float price;
public:
    void inputDetails() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore(); // Clear newline from buffer
        cout << "Enter Title: ";
        getline(cin, title);
        cout << "Enter Author: ";
        getline(cin, author);
        cout << "Enter Price: ";
        cin >> price;
    }
    void displayDetails() const {
        cout << "\nBook ID   : " << bookID;
        cout << "\nTitle     : " << title;
        cout << "\nAuthor    : " << author;
        cout << "\nPrice     : $" << price << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;
    Book library[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for Book " << i + 1 << ":\n";
        library[i].inputDetails();
    }

    cout << "\n=== Library Book Details ===\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nBook " << i + 1 << ":";
        library[i].displayDetails();
    }
    return 0;
};   