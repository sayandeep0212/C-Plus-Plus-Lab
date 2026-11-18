#include <iostream>
using namespace std;

class Student {
    int roll, marks[5];
    string name;
    static int count;
public:
    Student() { roll = 0; name = ""; for(int i=0;i<5;i++) marks[i]=0; count++; }
    void getData() {
        cout << "Enter roll and name: ";
        cin >> roll >> name;
        cout << "Enter marks in 5 subjects: ";
        for(int i=0;i<5;i++) cin >> marks[i];
    }
    int total() {
        int sum=0;
        for(int i=0;i<5;i++) sum += marks[i];
        return sum;
    }
    static void showCount() { cout << "Students created: " << count << endl; }
    friend void highest(Student s[], int n);
};

int Student::count = 0;

// Function outside the class using scope resolution
void Student::getData();

void highest(Student s[], int n) {
    int pos=0;
    for(int i=1;i<n;i++)
        if(s[i].total() > s[pos].total()) pos=i;
    cout << "Highest marks: " << s[pos].name << " = " << s[pos].total() << endl;
}

int main() {
    Student s[5];
    for(int i=0;i<5;i++) s[i].getData();
    Student::showCount();
    highest(s,5);
    return 0;
}
