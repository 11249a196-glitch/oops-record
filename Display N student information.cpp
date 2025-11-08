#include <iostream>
#include <iomanip>
using namespace std;

class ElectricityBill {
private:
    int consumerNumber;
    char consumerName[50];
    int units;
    float billAmount;
public:
    void getData() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;
        cout << "Enter Consumer Name: ";
        cin.ignore();
        cin.getline(consumerName, 50);
        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    void calculateBill() {
        if (units <= 100)
            billAmount = units * 1.5;
        else if (units <= 200)
            billAmount = 100 * 1.5 + (units - 100) * 2.5;
        else if (units <= 300)
            billAmount = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0;
        else
            billAmount = 100 * 1.5 + 100 * 2.5 + 100 * 4.0 + (units - 300) * 6.0;
        // Add fixed charge
        billAmount += 50;
    }

    void displayBill() {
        cout << "\n--- Electricity Bill ---\n";
        cout << "Consumer Number : " << consumerNumber << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Units Consumed  : " << units << endl;
        cout << fixed << setprecision(2);
        cout << "Total Bill      : Rs. " << billAmount << endl;
    }
};

int main() {
    ElectricityBill eb;
    eb.getData();
    eb.calculateBill();
    eb.displayBill();
    return 0;
}
