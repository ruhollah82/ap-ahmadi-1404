#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int riazi;
    int fizik;
    int shimi;

public:
    Student()
    {
        name = "-";
        age = 0;
        riazi = 0;
        fizik = 0;
        shimi = 0;
    }

    Student(string name1, int a, int r, int f, int s)
    {
        setName(name1);
        setAge(a);
        setRiazi(r);
        setFizik(f);
        setShimi(s);
    }

    ~Student()
    {
        cout << "Object destroyed!" << endl;
    }

    // setters
    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        if (a < 0)
        {
            cout << "Invalid age!" << endl;
            return;
        }
        age = a;
    }

    void setRiazi(int r)
    {
        if (r < 0 || r > 20)
        {
            cout << "Invalid value for Riazi!" << endl;
            return;
        }
        riazi = r;
    }

    void setFizik(int f)
    {
        if (f < 0 || f > 20)
        {
            cout << "Invalid value for Fizik!" << endl;
            return;
        }
        fizik = f;
    }

    void setShimi(int s)
    {
        if (s < 0 || s > 20)
        {
            cout << "Invalid value for Shimi!" << endl;
            return;
        }
        shimi = s;
    }

    // getters
    string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }

    int getRiazi() const
    {
        return riazi;
    }

    int getFizik() const
    {
        return fizik;
    }

    int getShimi() const
    {
        return shimi;
    }
};

int main()
{
    Student s("Ali", 10, 15, 18, 20);

    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;
    cout << "Riazi: " << s.getRiazi() << endl;
    cout << "Fizik: " << s.getFizik() << endl;
    cout << "Shimi: " << s.getShimi() << endl;

    return 0;
}
