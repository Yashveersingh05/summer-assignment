#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int a[10][10];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Row-wise Sum:\n";

    for (int i = 0; i < rows; i++) {
        int sum = 0;

        for (int j = 0; j < cols; j++) {
            sum += a[i][j];
        }

        cout << "Row " << i + 1 << " Sum = " << sum << endl;
    }

    return 0;
}