#include <iostream>
using namespace std;

int main() {
    int roll;
    string name;
    float marks;

    cout << "===== Student Record Management System =====\n";

    cout << "Enter Roll Number: ";
    cin >> roll;
    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\n----- Student Record -----\n";
    cout << "Roll Number : " << roll << endl;
    cout << "Name        : " << name << endl;
    cout << "Marks       : " << marks << endl;

    return 0;
}