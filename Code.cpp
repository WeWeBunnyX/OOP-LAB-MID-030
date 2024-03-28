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