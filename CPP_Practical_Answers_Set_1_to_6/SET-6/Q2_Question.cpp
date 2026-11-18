#include <iostream>
using namespace std;

class Question {
protected:
    int id, maxMarks;
public:
    Question(int i,int m) { id=i; maxMarks=m; }
    virtual int evaluate()=0;
    virtual ~Question() {}
    friend void compare(Question &a,Question &b);
};

class MCQ : public Question {
    int correct;
public:
    MCQ(int i,int m,int c):Question(i,m) { correct=c; }
    int evaluate() { return correct ? maxMarks : 0; }
};

class Descriptive : public Question {
    int obtained;
public:
    Descriptive(int i,int m,int o):Question(i,m) { obtained=o; }
    int evaluate() { return obtained; }
};

void compare(Question &a,Question &b) {
    if(a.evaluate()>b.evaluate()) cout << "First question has more marks" << endl;
    else if(a.evaluate()<b.evaluate()) cout << "Second question has more marks" << endl;
    else cout << "Equal marks" << endl;
}

int main() {
    MCQ m(1,5,1);
    Descriptive d(2,10,8);
    Question *p=&m; cout << "MCQ marks: " << p->evaluate() << endl;
    p=&d; cout << "Descriptive marks: " << p->evaluate() << endl;
    compare(m,d);
    return 0;
}
