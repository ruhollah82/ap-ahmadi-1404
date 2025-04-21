#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

public:
    // Point() : x(1), y(1) {}
    Point(int x = 1, int y = 1)
    {
        this->x = x;
        this->y = y;
    }
    friend istream &operator>>(istream &IN, Point &point);
};

istream &operator>>(istream &IN, Point &point)
{

    IN >> point.x >> point.y;

    return IN;
}

int main()
{
    Point g;
}