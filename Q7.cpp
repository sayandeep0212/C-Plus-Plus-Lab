//Write a C++ program using a function and pointers to swap two numbers without using a third variables

#include <iostream>
using namespace std;

void swap (int *a, int *b) 
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main () {
    int a,b;
    cout << "Enter two numbers: ";
    cin >>a >>b ;
    swap (&a, &b);
    cout << "After swapping: " << endl;
    cout << "a = " <<a <<endl;
    cout << "b = " <<b <<endl;
    return 0;
}