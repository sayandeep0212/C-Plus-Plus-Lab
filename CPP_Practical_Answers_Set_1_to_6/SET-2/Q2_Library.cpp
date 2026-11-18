#include <iostream>
using namespace std;

class Publication {
protected:
    string title;
    int year;
public:
    Publication(string t,int y) { title=t; year=y; }
    virtual void display() = 0;
    virtual ~Publication() {}
    friend void compare(Publication *a, Publication *b);
};

class Book : public Publication {
public:
    Book(string t,int y):Publication(t,y) {}
    void display() { cout << "Book: " << title << ", " << year << endl; }
};

class Magazine : public Publication {
public:
    Magazine(string t,int y):Publication(t,y) {}
    void display() { cout << "Magazine: " << title << ", " << year << endl; }
};

void compare(Publication *a, Publication *b) {
    if(a->year > b->year) cout << a->title << " is newer" << endl;
    else if(a->year < b->year) cout << b->title << " is newer" << endl;
    else cout << "Same publication year" << endl;
}

int main() {
    Book b("C++ Basics",2024);
    Magazine m("Tech Today",2025);
    Publication *p=&b; p->display();
    p=&m; p->display();
    compare(&b,&m);
    return 0;
}
