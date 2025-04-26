#include <iostream>
using namespace std;

enum userType
{
    employee,
    manager,
    admin
};

class user
{
protected:
    int id;
    string name;
    string password;
    userType Type;
    static int count;

public:
    int get_count()
    {
        return count;
    }
};

int user::count = 0;

class Employee : public user
{
public:
    Employee()
    {
        id = 0;
        name = "-";
        password = "1234";
        Type = employee;
        count++;
    }
};

class Admin : public user
{
public:
    Admin()
    {
        id = 0;
        name = "-";
        password = "1234";
        Type = admin;
        count++;
    }
};

class Manager : public user
{
public:
    Manager()
    {
        id = 0;
        name = "-";
        password = "1234";
        Type = manager;
        count++;
    }
};

int main()
{
    Employee Amir;
    cout << Amir.get_count() << endl;

    Admin Mammad;
    cout << Mammad.get_count() << endl;

    Manager Fateme;
    cout << Fateme.get_count() << endl;
}