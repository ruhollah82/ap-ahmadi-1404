#include <iostream>

using namespace std;

class person
{
private:
    string name;
    string family;
    int age;

public:
    void setName(string n)
    {
        name = n;
    }

    void setFamily(string f)
    {
        family = f;
    }
    void setAge(int a)
    {
        if (a > 120 || a < 0)
        {
            cout << "enter a valid value!!" << endl;
        }
        else
        {
            age = a;
        }
    }
};

int main()
{
    person ali;
    ali.setName("ali");
}