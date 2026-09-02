#include <iostream>
using namespace std;
class Car {
private:
    void engineStart() {
        cout << "Engine started" << endl;
    }
public:
    void start() {
        engineStart();
        cout << "Car started";
    }
};
int main() {
    Car c;
    c.start();
    return 0;
}