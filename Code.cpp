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
        getline (cin, name);
        cout << "Please enter your phone number: " << endl;
        getline (cin,phone);

        cout << "Please enter the time slot you would like to reserve: " << endl;
        cin >> time;
        Reservation reservation(name, phone, time);
        addReservation(reservation);
        cout << "Your reservation has been made!" << endl;
    }



    }










};