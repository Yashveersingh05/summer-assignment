#include <iostream>
using namespace std;

int main() {
    int empId;
    string name, department;
    float salary;

    cout << "===== Employee Management System =====\n";

    cout << "Enter Employee ID: ";
    cin >> empId;
    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Department: ";
    getline(cin, department);

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "\n----- Employee Details -----\n";
    cout << "Employee ID : " << empId << endl;
    cout << "Name        : " << name << endl;
    cout << "Department  : " << department << endl;
    cout << "Salary      : " << salary << endl;

    return 0;
}