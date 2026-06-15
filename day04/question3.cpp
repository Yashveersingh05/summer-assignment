#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, digits = 0;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == num)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}