#include <iostream>
using namespace std;

int main() {
    int n, key;
    bool found = false;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Element not found";

    return 0;
}