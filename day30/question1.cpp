#include <iostream>
using namespace std;

int main()
{
    int roll[100], marks[100], n;
    string name[100];
    int choice, searchRoll;

    do
    {
        cout << "\n===== STUDENT RECORD SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Number of Students: ";
                cin >> n;

                for(int i = 0; i < n; i++)
                {
                    cout << "\nStudent " << i + 1 << endl;

                    cout << "Roll Number: ";
                    cin >> roll[i];
                    cin.ignore();

                    cout << "Name: ";
                    getline(cin, name[i]);

                    cout << "Marks: ";
                    cin >> marks[i];
                }
                break;

            case 2:
                cout << "\n----- Student Records -----\n";

                for(int i = 0; i < n; i++)
                {
                    cout << "\nRoll No : " << roll[i];
                    cout << "\nName    : " << name[i];
                    cout << "\nMarks   : " << marks[i] << endl;
                }
                break;

            case 3:
            {
                bool found = false;

                cout << "Enter Roll Number: ";
                cin >> searchRoll;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == searchRoll)
                    {
                        cout << "\nStudent Found";
                        cout << "\nName : " << name[i];
                        cout << "\nMarks: " << marks[i] << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Student Not Found.";
                break;
            }

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 4);

    return 0;
}