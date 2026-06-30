#include <iostream>
using namespace std;

int bookId[100];
string title[100];
bool issued[100];
int total = 0;

void addBook()
{
    cout << "Enter Book ID: ";
    cin >> bookId[total];
    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, title[total]);

    issued[total] = false;
    total++;
}

void displayBooks()
{
    cout << "\n------ Book List ------\n";

    for(int i = 0; i < total; i++)
    {
        cout << "\nBook ID : " << bookId[i];
        cout << "\nTitle   : " << title[i];
        cout << "\nStatus  : ";

        if(issued[i])
            cout << "Issued";
        else
            cout << "Available";

        cout << endl;
    }
}

void issueBook()
{
    int id;

    cout << "Enter Book ID: ";
    cin >> id;

    for(int i = 0; i < total; i++)
    {
        if(bookId[i] == id)
        {
            issued[i] = true;
            cout << "Book Issued Successfully.\n";
            return;
        }
    }

    cout << "Book Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== MINI LIBRARY =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Issue Book";
        cout << "\n4. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                issueBook();
                break;

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 4);

    return 0;
}