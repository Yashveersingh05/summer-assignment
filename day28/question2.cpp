#include <iostream>
using namespace std;

class Bank
{
public:
    int accNo;
    string name;
    float balance;

    void createAccount()
    {
        cout<<"Enter Account Number: ";
        cin>>accNo;
        cin.ignore();

        cout<<"Enter Name: ";
        getline(cin,name);

        cout<<"Enter Initial Balance: ";
        cin>>balance;
    }

    void deposit(float amount)
    {
        balance += amount;
    }

    void withdraw(float amount)
    {
        if(amount<=balance)
            balance -= amount;
        else
            cout<<"Insufficient Balance\n";
    }

    void display()
    {
        cout<<"\nAccount No : "<<accNo;
        cout<<"\nName       : "<<name;
        cout<<"\nBalance    : "<<balance<<endl;
    }
};

int main()
{
    Bank acc;
    int choice;
    float amount;

    acc.createAccount();

    do
    {
        cout<<"\n===== Bank System =====";
        cout<<"\n1. Deposit";
        cout<<"\n2. Withdraw";
        cout<<"\n3. Display";
        cout<<"\n4. Exit";
        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"Enter Amount: ";
            cin>>amount;
            acc.deposit(amount);
            break;

        case 2:
            cout<<"Enter Amount: ";
            cin>>amount;
            acc.withdraw(amount);
            break;

        case 3:
            acc.display();
            break;
        }

    }while(choice!=4);

    return 0;
}