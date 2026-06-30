#include <iostream>
using namespace std;

class Library
{
public:
    int id;
    string title;
    string author;
    bool issued;

    void addBook()
    {
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        issued = false;
    }

    void display()
    {
        cout << "\nBook ID : " << id;
        cout << "\nTitle   : " << title;
        cout << "\nAuthor  : " << author;
        cout << "\nStatus  : " << (issued ? "Issued" : "Available") << endl;
    }
};

int main()
{
    Library books[100];
    int n = 0, choice, searchId;

    do
    {
        cout << "\n===== Library Management =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Issue Book";
        cout << "\n4. Return Book";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            books[n].addBook();
            n++;
            break;

        case 2:
            for(int i=0;i<n;i++)
                books[i].display();
            break;

        case 3:
            cout << "Enter Book ID: ";
            cin >> searchId;

            for(int i=0;i<n;i++)
            {
                if(books[i].id==searchId)
                {
                    books[i].issued=true;
                    cout<<"Book Issued Successfully\n";
                }
            }
            break;

        case 4:
            cout << "Enter Book ID: ";
            cin >> searchId;

            for(int i=0;i<n;i++)
            {
                if(books[i].id==searchId)
                {
                    books[i].issued=false;
                    cout<<"Book Returned Successfully\n";
                }
            }
            break;
        }
    }while(choice!=5);

    return 0;
}