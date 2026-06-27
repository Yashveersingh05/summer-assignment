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

    cout << "Column-wise Sum:\n";

    for (int j = 0; j < cols; j++) {
        int sum = 0;

        for (int i = 0; i < rows; i++) {
            sum += a[i][j];
        }

        cout << "Column " << j + 1 << " Sum = " << sum << endl;
    }

    return 0;
}