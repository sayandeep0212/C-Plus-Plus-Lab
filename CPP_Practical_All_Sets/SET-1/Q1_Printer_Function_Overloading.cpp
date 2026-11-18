#include <iostream>
#include <string>
using namespace std;

class Printer
{
public:
    void print_info()
    {
        cout << "Default Message" << endl;
    }

    void print_info(string msg)
    {
        cout << "Custom: " << msg << endl;
    }
};

int main()
{
    Printer p;

    p.print_info();
    p.print_info("Hello Student");

    return 0;
}
