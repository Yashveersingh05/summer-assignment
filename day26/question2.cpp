#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "===== Voting Eligibility System =====" << endl;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
        cout << name << " is eligible to vote.";
    else
        cout << name << " is not eligible to vote.";

    return 0;
}