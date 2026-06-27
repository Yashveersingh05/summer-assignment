#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char word[10][50];
    int n;

    cout << "Enter number of words: ";
    cin >> n;
    cin.ignore();

    cout << "Enter words:\n";
    for (int i = 0; i < n; i++) {
        cin.getline(word[i], 50);
    }

    char temp[50];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if (strlen(word[i]) > strlen(word[j])) {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    cout << "Words sorted by length:\n";

    for (int i = 0; i < n; i++) {
        cout << word[i] << endl;
    }

    return 0;
}