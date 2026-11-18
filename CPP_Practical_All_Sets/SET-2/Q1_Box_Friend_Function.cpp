#include <iostream>
using namespace std;

class Box
{
private:
    int length, width;

public:
    Box(int l, int w)
    {
        length = l;
        width = w;
    }

    friend int calculate_volume(Box &b, int height);
};

int calculate_volume(Box &b, int height)
{
    return b.length * b.width * height;
}

int main()
{
    Box b(5, 4);

    cout << "Volume = " << calculate_volume(b, 3);

    return 0;
}
