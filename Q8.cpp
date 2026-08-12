//write a c++ program to create a function that accepts an array using pointer and finds the longest and smallest number in the array

#include <iostream>
using namespace std;
void find(int *arr){

    int largest = *arr;
    int smallest = *arr;
    for(int i=0; i<5; i++){
        if(*(arr+i) > largest){
            largest = *(arr+i);
        }
        if(*(arr+i) < smallest){
            smallest = *(arr+i);
        }
    }
    cout << "Largest number in the array: " << largest << endl;
    cout << "Smallest number in the array: " << smallest << endl;
}

int main() {
    
    int arr[5];
    cout << "Enter 5 numbers: ";
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    find(arr);
    return 0;
}