#include <iostream>
using namespace std;

class Person
{

    string name;
    int age;

public:
    Person(string name, int a)
    {
        this->name = name;
        age = a;
    }

    void DisplayPerson()
    {
        cout << name << "\n"
             << age << endl;
    }
};

class Employee : public Person
{
    int salary;

public:
    Employee(string name, int age, int salary) : Person(name, age)
    {

        this->salary = salary;
    }

    void DisplayEmployee()
    {
        DisplayPerson();
        cout << salary << endl;
    }
};

class Manager : public Employee
{

    string department;

public:
    Manager(string name, int age, int salary, string dep) : Employee(name, age, salary)
    {
        department = dep;
    }

    void DisplayManager()
    {
        DisplayEmployee();
        cout << department << endl;
    }
};

int main()
{
    Manager ali("ali", 20, 30, "mohandesi");
    ali.DisplayManager();

    Employee reza("reza", 18, 20);
    reza.DisplayEmployee();
}