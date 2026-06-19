#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of square matrix: ";
    cin >> n;

    int matrix[10][10];
    int sum = 0;

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    cout << "Diagonal Sum = " << sum;

    return 0;
}