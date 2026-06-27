#include <iostream>
using namespace std;

int main() {
    string employeeName;
    float basic, hra, da, grossSalary;

    cout << "===== Salary Management System =====\n";

    cout << "Enter Employee Name: ";
    getline(cin, employeeName);

    cout << "Enter Basic Salary: ";
    cin >> basic;

    hra = basic * 0.20;
    da = basic * 0.10;
    grossSalary = basic + hra + da;

    cout << "\n----- Salary Slip -----\n";
    cout << "Employee Name : " << employeeName << endl;
    cout << "Basic Salary  : " << basic << endl;
    cout << "HRA (20%)     : " << hra << endl;
    cout << "DA (10%)      : " << da << endl;
    cout << "Gross Salary  : " << grossSalary << endl;

    return 0;
}