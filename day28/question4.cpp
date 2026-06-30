#include <iostream>
using namespace std;

class Contact
{
public:
    string name;
    string phone;

    void addContact()
    {
        cin.ignore();

        cout<<"Enter Name: ";
        getline(cin,name);

        cout<<"Enter Phone Number: ";
        getline(cin,phone);
    }

    void display()
    {
        cout<<"\nName  : "<<name;
        cout<<"\nPhone : "<<phone<<endl;
    }
};

int main()
{
    Contact c[100];
    int n=0, choice;

    do
    {
        cout<<"\n===== Contact Management =====";
        cout<<"\n1. Add Contact";
        cout<<"\n2. Display Contacts";
        cout<<"\n3. Exit";
        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            c[n].addContact();
            n++;
            break;

        case 2:
            for(int i=0;i<n;i++)
                c[i].display();
            break;
        }

    }while(choice!=3);

    return 0;
}