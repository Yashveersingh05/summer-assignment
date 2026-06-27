#include <iostream>
using namespace std;

int main() {
    char str[200];
    char longest[100];
    int maxLength = 0, currentLength = 0, start = 0;

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    for (int i = 0;; i++) {

        if (str[i] != ' ' && str[i] != '\0') {
            currentLength++;
        }
        else {
            if (currentLength > maxLength) {
                maxLength = currentLength;

                for (int j = 0; j < maxLength; j++) {
                    longest[j] = str[start + j];
                }
                longest[maxLength] = '\0';
            }

            currentLength = 0;
            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    cout << "Longest word: " << longest << endl;
    cout << "Length: " << maxLength;

    return 0;
}