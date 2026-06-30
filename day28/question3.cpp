#include <iostream>
using namespace std;

class Ticket
{
public:
    int seat[10];

    Ticket()
    {
        for(int i=0;i<10;i++)
            seat[i]=0;
    }

    void showSeats()
    {
        cout<<"\nSeat Status\n";
        for(int i=0;i<10;i++)
        {
            cout<<"Seat "<<i+1<<" : ";
            if(seat[i]==0)
                cout<<"Available";
            else
                cout<<"Booked";
            cout<<endl;
        }
    }

    void bookSeat(int s)
    {
        if(seat[s-1]==0)
        {
            seat[s-1]=1;
            cout<<"Seat Booked Successfully\n";
        }
        else
        {
            cout<<"Seat Already Booked\n";
        }
    }
};

int main()
{
    Ticket t;
    int choice, seatNo;

    do
    {
        cout<<"\n===== Ticket Booking =====";
        cout<<"\n1. View Seats";
        cout<<"\n2. Book Seat";
        cout<<"\n3. Exit";
        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            t.showSeats();
            break;

        case 2:
            cout<<"Enter Seat Number (1-10): ";
            cin>>seatNo;

            if(seatNo>=1 && seatNo<=10)
                t.bookSeat(seatNo);
            else
                cout<<"Invalid Seat Number\n";

            break;
        }

    }while(choice!=3);

    return 0;
}