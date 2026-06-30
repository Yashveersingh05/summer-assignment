#include <iostream>
using namespace std;

class Item
{
public:
    int id;
    string name;
    int quantity;
    float price;

    void addItem()
    {
        cout << "Enter Item ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Item Name: ";
        getline(cin, name);

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\nItem ID  : " << id;
        cout << "\nName     : " << name;
        cout << "\nQuantity : " << quantity;
        cout << "\nPrice    : " << price << endl;
    }
};

int main()
{
    Item items[100];
    int n = 0;
    int choice, searchId;

    do
    {
        cout << "\n===== INVENTORY MANAGEMENT =====";
        cout << "\n1. Add Item";
        cout << "\n2. Display Items";
        cout << "\n3. Update Quantity";
        cout << "\n4. Search Item";
        cout << "\n5. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                items[n].addItem();
                n++;
                break;

            case 2:
                for(int i=0;i<n;i++)
                    items[i].display();
                break;

            case 3:
                cout << "Enter Item ID: ";
                cin >> searchId;

                for(int i=0;i<n;i++)
                {
                    if(items[i].id == searchId)
                    {
                        cout << "Enter New Quantity: ";
                        cin >> items[i].quantity;
                        cout << "Quantity Updated Successfully.\n";
                    }
                }
                break;

            case 4:
                cout << "Enter Item ID: ";
                cin >> searchId;

                for(int i=0;i<n;i++)
                {
                    if(items[i].id == searchId)
                    {
                        items[i].display();
                    }
                }
                break;

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 5);

    return 0;
}