#include <iostream>

using namespace std;

struct smartPhone
{
    string name;
    int internalStorage;
    string color;
};

void test(int* p)
{
    *p = 100;
}

void upgrade(smartPhone &MyPhone)
{
    MyPhone.internalStorage = 1024;

}

void display(smartPhone MyPhone)
{
    cout << "Name: " << MyPhone.name << endl;
    cout << "Internal Storage : " << MyPhone.internalStorage << endl;
    cout << "Color : " << MyPhone.color << endl;
    cout << "------------------------------" << endl;
}

int main()
{
    int a = 10;

    int* p = &a;


    *p = 20;

    // cout<<a;


    int* ptr = new int;

    *ptr = 1;

    // cout<<ptr;

    test(&a);

    // cout<<a;

    smartPhone p1;
    p1.name = "iphon 12";
    p1.internalStorage = 256;
    p1.color = "black";

    upgrade(p1);

    // display(p1);

    int* list = new int[10];

    for(int i=0;i<10; i++)
    {
        cout<<list[i]<<" ";
    }

    int** list2d = new int*[10];
    
    for(int i=0;i< 10; i++)
    {
        list2d[i] = new int[15];
    }

    for(int i=0;i<10 ; i++)
    {
        for(int j=0;j<10; j++)
        {
            cout<<list2d[i][j]<<" ";
        }

        cout<<endl;
    }


}