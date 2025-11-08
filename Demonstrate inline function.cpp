#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string empName, empId, designation;
    float basicPay, hra, da, ta, pf, grossSalary, netSalary;
    cout << "Enter Employee Name: ";
    getline(cin, empName);
    cout << "Enter Employee ID: ";
    cin >> empId;
    cin.ignore(); 
    cout << "Enter Designation: ";
    getline(cin, designation);
    cout << "Enter Basic Pay: ";
    cin >> basicPay;
    hra = 0.20 * basicPay;  
    da  = 0.10 * basicPay;  
    ta  = 0.05 * basicPay;  
    pf  = 0.08 * basicPay; 
    grossSalary = basicPay + hra + da + ta;
    netSalary = grossSalary - pf;
    // Display Salary Slip
    cout << fixed << setprecision(2);
    cout << "\n---------------------------------------------";
    cout << "\n\t\tSALARY SLIP";
    cout << "\n---------------------------------------------";
    cout << "\nEmployee Name   : " << empName;
    cout << "\nEmployee ID     : " << empId;
    cout << "\nDesignation     : " << designation;
    cout << "\n---------------------------------------------";
    cout << "\nBasic Pay       : " << basicPay;
    cout << "\nHRA (20%)       : " << hra;
    cout << "\nDA (10%)        : " << da;
    cout << "\nTA (5%)         : " << ta;
    cout << "\n---------------------------------------------";
    cout << "\nGross Salary    : " << grossSalary;
    cout << "\nPF Deduction(8%): " << pf;
    cout << "\n---------------------------------------------";
    cout << "\nNet Salary      : " << netSalary;
    cout << "\n---------------------------------------------\n";
    return 0;
}
