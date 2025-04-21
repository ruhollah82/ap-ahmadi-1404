#include <iostream>
#include <vector>
using namespace std;

class String
{
    int n;
    char *array;

public:
    char operator[](int index)
    {
        if (index < n && n >= 0)
        {

            return array[index];
        }
        else
        {
            cout << "index out of range";
        }
    }

    String operator=(String s)
    {

        if (n == s.n)
        {
            for (int i = 0; i < n; i++)
            {
                array[i] = s.array[i];
            }
        }
        else
        {
            delete[] array;

            array = new char[s.n];
            n = s.n;

            for (int i = 0; i < s.n; i++)
            {
                array[i] = s.array[i];
            }
        }

        return s;
    }
};

int main()
{
    String s;

    cout << s[2];

    String b;

    b = s;
}
