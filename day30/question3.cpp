#include <iostream>
using namespace std;

int empId[100];
string empName[100];
float salary[100];
int total = 0;

void addEmployee()
{
    cout << "Enter Employee ID: ";
    cin >> empId[total];
    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, empName[total]);

    cout << "Enter Salary: ";
    cin >> salary[total];

    total++;
}

void displayEmployees()
{
    cout << "\n------ Employee List ------\n";

    for(int i = 0; i < total; i++)
    {
        cout << "\nEmployee ID : " << empId[i];
        cout << "\nName        : " << empName[i];
        cout << "\nSalary      : " << salary[i] << endl;
    }
}

void searchEmployee()
{
    int id;

    cout << "Enter Employee ID: ";
    cin >> id;

    for(int i = 0; i < total; i++)
    {
        if(empId[i] == id)
        {
            cout << "\nEmployee Found";
            cout << "\nName   : " << empName[i];
            cout << "\nSalary : " << salary[i] << endl;
            return;
        }
    }

    cout << "Employee Not Found.";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== EMPLOYEE MANAGEMENT =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
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