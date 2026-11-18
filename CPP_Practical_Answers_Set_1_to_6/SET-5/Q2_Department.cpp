#include <iostream>
using namespace std;

class Teacher {
    string name;
    int id;
    double salary;
public:
    Teacher(string n="",int i=0,double s=0) {
        name=n; id=i; salary=s;
    }
    void show() { cout << id << " " << name << " Salary: " << salary << endl; }
};

class Department {
    string name;
    Teacher teachers[3];
public:
    Department(string n,Teacher a,Teacher b,Teacher c) {
        name=n; teachers[0]=a; teachers[1]=b; teachers[2]=c;
    }
    void show() {
        cout << "Department: " << name << endl;
        for(int i=0;i<3;i++) teachers[i].show();
    }
};

int main() {
    Teacher t1("Amit",1,30000), t2("Riya",2,35000), t3("Raj",3,32000);
    Department d("CSE",t1,t2,t3);
    d.show();
    Teacher *p=&t1; p->show();
    return 0;
}
