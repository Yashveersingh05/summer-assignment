#include <iostream>
using namespace std;

int main() {
    string name;
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;

    cout << "===== Marksheet Generation System =====\n";

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n----- Marksheet -----\n";
    cout << "Student Name : " << name << endl;
    cout << "Total Marks  : " << total << " / 500" << endl;
    cout << "Percentage   : " << percentage << "%" << endl;
    cout << "Grade        : " << grade << endl;

    return 0;
}