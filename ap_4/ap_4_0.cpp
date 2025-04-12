#include <iostream>
using namespace std;

class student
{
    string name = "ali";
    string family = "fatemi";
    int age = 10;
    float average = 18.5;
    friend void print(student);
};

void print(student A)
{
    cout << "age = " A.age;
}

int main()
{
    student K;
    print(K);
}