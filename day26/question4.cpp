#include <iostream>
using namespace std;

int main() {
    int answer;
    int score = 0;

    cout << "===== Simple Quiz =====" << endl;

    cout << "\nQ1. What is the capital of India?" << endl;
    cout << "1. Mumbai" << endl;
    cout << "2. Delhi" << endl;
    cout << "3. Chennai" << endl;
    cout << "4. Kolkata" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\nQ2. How many days are there in a leap year?" << endl;
    cout << "1. 365" << endl;
    cout << "2. 364" << endl;
    cout << "3. 366" << endl;
    cout << "4. 360" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\nQ3. Which language is mainly used for Android development?" << endl;
    cout << "1. Java" << endl;
    cout << "2. Python" << endl;
    cout << "3. HTML" << endl;
    cout << "4. CSS" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 1)
        score++;

    cout << "\nYour Score: " << score << " / 3" << endl;

    if (score == 3)
        cout << "Excellent!" << endl;
    else if (score == 2)
        cout << "Good Job!" << endl;
    else
        cout << "Keep Practicing!" << endl;

    return 0;
}