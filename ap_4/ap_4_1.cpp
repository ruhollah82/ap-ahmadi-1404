#include <iostream>
using namespace std;

class Bank
{

    string name;
    int accountNumber;
    int balance;

    friend class ATM;

public:
    Bank(string n, int b)
    {
        name = n;
        balance = b;
    }
};

class ATM
{

public:
    void withdraw(Bank &b, int value)
    {
        b.balance -= value;
    }

    void print(Bank b)
    {
        cout << "name = " << b.name << " balance = " << b.balance;
    }
};

int main()
{
    Bank b("ali", 1000);

    ATM a;
    a.withdraw(b, 200);
    a.print(b);
}