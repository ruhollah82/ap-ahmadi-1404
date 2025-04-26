#include <iostream>
using namespace std;

class A
{
private:
    int *ptr;
    int size;

public:
    A(int _size)
    {
        size = _size;
        ptr = new int[_size];
    };

    A(int arr[])
    {
        ptr = new int[sizeof(arr) / sizeof(int)];
        size = sizeof(arr) / sizeof(int);
        for (int i = 0; i < size; i++)
        {
            ptr[i] = arr[i];
        }
    }

    A(const A &a)
    {
        size = a.size;
        delete[] ptr;
        ptr = new int[a.size];
        for (int i = 0; i < a.size; i++)
        {
            ptr[i] = a.ptr[i];
        }
    }
};

int main()
{
    int arr[10];

    A dynamic1(arr);

    A dynamic2(dynamic1);

    A dynamic3(8);
}
