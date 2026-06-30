#include <iostream>
using namespace std;

int roll[100];
string name[100];
int marks[100];
int total = 0;

void addStudent()
{
    cout << "Enter Roll Number: ";
    cin >> roll[total];
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[total]);

    cout << "Enter Marks: ";
    cin >> marks[total];

    total++;
}

void displayStudents()
{
    if(total == 0)
    {
        cout << "No Records Found.\n";
        return;
    }

    cout << "\n------ Student Records ------\n";

    for(int i = 0; i < total; i++)
    {
        cout << "\nRoll No : " << roll[i];
        cout << "\nName    : " << name[i];
        cout << "\nMarks   : " << marks[i] << endl;
    }
}

void searchStudent()
{
    int r;

    cout << "Enter Roll Number: ";
    cin >> r;

    for(int i = 0; i < total; i++)
    {
        if(roll[i] == r)
        {
            cout << "\nStudent Found";
            cout << "\nName  : " << name[i];
            cout << "\nMarks : " << marks[i] << endl;
            return;
        }
    }

    cout << "Student Not Found.\n";
}

void updateMarks()
{
    int r;

    cout << "Enter Roll Number: ";
    cin >> r;

    for(int i = 0; i < total; i++)
    {
        if(roll[i] == r)
        {
            cout << "Enter New Marks: ";
            cin >> marks[i];

            cout << "Marks Updated Successfully.\n";
            return;
        }
    }

    cout << "Student Not Found.\n";
}

void deleteStudent()
{
    int r;

    cout << "Enter Roll Number: ";
    cin >> r;

    for(int i = 0; i < total; i++)
    {
        if(roll[i] == r)
        {
            for(int j = i; j < total - 1; j++)
            {
                roll[j] = roll[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
            }

            total--;

            cout << "Record Deleted Successfully.\n";
            return;
        }
    }

    cout << "Student Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Marks";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 6);

    return 0;
}