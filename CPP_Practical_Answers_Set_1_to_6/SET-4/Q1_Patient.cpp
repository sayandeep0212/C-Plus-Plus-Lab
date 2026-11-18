#include <iostream>
using namespace std;

class Patient {
    int id, tests[4];
    string name;
    static int count;
public:
    Patient(int i,string n,int a,int b,int c,int d) {
        id=i; name=n; tests[0]=a; tests[1]=b; tests[2]=c; tests[3]=d; count++;
    }
    void show() {
        cout << id << " " << name << " Test results: ";
        for(int i=0;i<4;i++) cout << tests[i] << " ";
        cout << endl;
    }
    static void showCount() { cout << "Patients: " << count << endl; }
    friend void compare(Patient a,Patient b);
};

int Patient::count=0;

void compare(Patient a,Patient b) {
    int x=0,y=0;
    for(int i=0;i<4;i++) { x+=a.tests[i]; y+=b.tests[i]; }
    cout << (x>y ? a.name : b.name) << " has higher total test result." << endl;
}

Patient makePatient(int id,string name,int a,int b,int c,int d) {
    Patient p(id,name,a,b,c,d);
    return p;
}

int main() {
    Patient p1=makePatient(1,"Amit",10,20,30,40);
    Patient p2=makePatient(2,"Riya",15,25,35,45);
    p1.show(); p2.show();
    Patient::showCount();
    compare(p1,p2);
    int localValue=10; // local variable
    cout << "Local variable: " << localValue << endl;
    return 0;
}
