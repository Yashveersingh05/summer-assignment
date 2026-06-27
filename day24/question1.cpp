#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100], temp[200];
    int len1 = 0, len2 = 0;
    bool found = false;

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    while (str1[len1] != '\0')
        len1++;

    while (str2[len2] != '\0')
        len2++;

    if (len1 != len2) {
        cout << "Strings are not rotations.";
        return 0;
    }

    int k = 0;
    for (int i = 0; i < len1; i++)
        temp[k++] = str1[i];

    for (int i = 0; i < len1; i++)
        temp[k++] = str1[i];

    temp[k] = '\0';

    for (int i = 0; i <= len1; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (temp[i + j] != str2[j])
                break;
        }

        if (j == len2) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Strings are rotations.";
    else
        cout << "Strings are not rotations.";

    return 0;
}