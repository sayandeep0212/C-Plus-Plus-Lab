#include<iostream>

class Employee{
    public:
        std::string name;
        float salary;
        void display() const{
            std::cout<<name<<" "<<salary<<std::endl;
        }   
};

int main(){
    Employee e[] = {
        {"Sayandeep", 10.0},
        {"Kush", 20.0}
    };
    e[0].display();
    e[1].display();
}