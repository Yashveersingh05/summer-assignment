#include <iostream>
using namespace std;

int main() {
    int num, temp, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        int fact = 1;

        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == num)
        cout << "Strong Number";
    else
        cout << "Not a Strong Number";

    return 0;
}