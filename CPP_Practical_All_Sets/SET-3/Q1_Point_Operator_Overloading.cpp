#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    Point operator +(Point p)
    {
        Point temp(0, 0);

        temp.x = x + p.x;
        temp.y = y + p.y;

        return temp;
    }

    void display()
    {
        cout << "(" << x << ", " << y << ")";
    }
};

int main()
{
    Point p1(2, 3), p2(4, 5);

    Point p3 = p1 + p2;

    cout << "Sum = ";
    p3.display();

    return 0;
}
