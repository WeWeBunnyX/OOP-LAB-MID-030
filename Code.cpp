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
