#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Reservation
{
public:
    string name, phone, time;

    Reservation(string name, string phone, string time)
    {
        this->name = name;
        this->phone = phone;
        this->time = time;
    }
};

class Restaurant
{
private:
    string name, day, time;
    vector<Reservation> reservations;

    void addReservation(Reservation reservation)
    {
        reservations.push_back(reservation);
    }

public:
    void menu()
        {
        cout << "Welcome to XYZ restaurant!" << endl;
        cout << "To begin, enter your name: " << endl;
        cin >> name;
        cout << "Profile created!" << endl;
        system("cls")
         }

        void displayTimeSlots()
        {
             cout << "Available time slots are: " << endl;
            for (int i = 1; i < 9; i++)
             {
                 string time = to_string(i) + ":00 PM";
                 cout << time << endl;
             }

        }

        void takeReservation()
        {
        cout << "Please enter your name: " << endl;
        cin >> name;
        cout << "Please enter your phone number: " << endl;
        cin >> phone;
        cout << "Please enter the time slot you would like to reserve: " << endl;
        cin >> time;
        bool is_time_available = true;
        for (auto& reservation : reservations) {
            if (reservation.time == time) {
                cout << "That time slot is already reserved." << endl;
                is_time_available = false;
                break;
            }
        }

        if (is_time_available) {
            Reservation reservation(name, phone, time);
            addReservation(reservation);
            cout << "Your reservation has been made!" << endl;
        }

    }


        void displayReservations()
        {
            cout << "Your reservations are as follows: " << endl;
            for (auto& reservation : reservations)
            {
                 cout << "Name: " << reservation.name<<endl;
                 cout<<"Phone:" << reservation.phone<<endl;
                 cout<<"Time:" << reservation.time<< endl;
            }

        }

    
    int main()
    {
        Restaurant restaurant;
        restaurant.menu();

        while (true)

    {
        cout << "1. Show time slots" << endl;
        cout << "2. Take a reservation" << endl;
        cout << "3. Show reservations" << endl;
        cout << "4. Exit" << endl;
        cout << "Please enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            restaurant.displayTimeSlots();
            break;
        case 2:
            restaurant.takeReservation();
            break;
        case 3:
            restaurant.displayReservations();
            break;
        case 4:
            return 0;
        default:
            cout << "Invalid choice." << endl;
        }

    }

    return 0;

}





  














};