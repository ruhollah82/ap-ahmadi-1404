#include <iostream>

using namespace std;

struct smartPhone
{
    string name;
    int internalStorage;
    string color;
};

void display(smartPhone MyPhone)
{
    cout << "Name: " << MyPhone.name << endl;
    cout << "Internal Storage : " << MyPhone.internalStorage << endl;
    cout << "Color : " << MyPhone.color << endl;
    cout << "------------------------------" << endl;
}

smartPhone upgrade(smartPhone MyPhone)
{
    MyPhone.internalStorage = 1024;
    return MyPhone;
}

int main()
{
    smartPhone p1;
    p1.name = "iphon 12";
    p1.internalStorage = 256;
    p1.color = "black";

    smartPhone p2;
    p2.name = "galaxy s24";
    p2.internalStorage = 512;
    p2.color = "white";

    display(p1);
    display(p2);

    smartPhone A[10];

    for (int i = 0; i < 9; i++)
    {
        cin >> A[i].name;
    }

    p1 = upgrade(p1);

    display(p1);
}