#include <iostream>
using namespace std;

int main() {
    char str[100];
    int freq[256] = {0};

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    int max = 0;
    char ch;

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] > max) {
            max = freq[(int)str[i]];
            ch = str[i];
        }
    }

    cout << "Maximum occurring character: " << ch << endl;
    cout << "Frequency: " << max;

    return 0;
}