#include <iostream>
using namespace std;

int main() {
    int x, n;
    long long result = 1;

    cout << "Enter base: ";
    cin >> x;

    cout << "Enter power: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        result *= x;
    }

    cout << x << "^" << n << " = " << result;

    return 0;
}