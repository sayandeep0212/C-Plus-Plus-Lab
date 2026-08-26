//write a c++ program to create a car class with brand and price & display all the information.

#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        string brand;
        double price;

    public:
        void input() {
            cout << "Enter car brand: ";
            getline(cin, brand);

            cout << "Enter car price: ";
            cin >> price;
        }

        void displayDetails() {
            cout << "\nCar Details" << endl;
            cout << "Brand: " << brand << endl;
            cout << "Price: $" << price << endl;
        }

};

int main() {
    Car car;

    car.input();
    car.displayDetails();

    return 0;
}