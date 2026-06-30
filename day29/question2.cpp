#include <iostream>
using namespace std;

int main()
{
    int arr[100], n = 0;
    int choice, key;

    do
    {
        cout << "\n===== ARRAY OPERATIONS =====";
        cout << "\n1. Insert Array";
        cout << "\n2. Display Array";
        cout << "\n3. Maximum Element";
        cout << "\n4. Minimum Element";
        cout << "\n5. Sum of Elements";
        cout << "\n6. Search Element";
        cout << "\n7. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Size: ";
                cin >> n;

                cout << "Enter Elements:\n";
                for(int i=0;i<n;i++)
                    cin >> arr[i];
                break;

            case 2:
                cout << "Array: ";
                for(int i=0;i<n;i++)
                    cout << arr[i] << " ";
                break;

            case 3:
            {
                int max = arr[0];
                for(int i=1;i<n;i++)
                    if(arr[i] > max)
                        max = arr[i];

                cout << "Maximum = " << max;
                break;
            }

            case 4:
            {
                int min = arr[0];
                for(int i=1;i<n;i++)
                    if(arr[i] < min)
                        min = arr[i];

                cout << "Minimum = " << min;
                break;
            }

            case 5:
            {
                int sum = 0;

                for(int i=0;i<n;i++)
                    sum += arr[i];

                cout << "Sum = " << sum;
                break;
            }

            case 6:
            {
                cout << "Enter Element: ";
                cin >> key;

                bool found = false;

                for(int i=0;i<n;i++)
                {
                    if(arr[i] == key)
                    {
                        cout << "Element Found at Position " << i + 1;
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Element Not Found.";

                break;
            }

            case 7:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 7);

    return 0;
}