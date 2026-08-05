#include <stdio.h>

int main() {
    int odd = 0;
    int even = 0;
    int arr [] = {5,6,3,20, 7, 8, 9, 10};
    for (int i = 0; i < 8; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Number of even numbers: %d\n", even);
    printf("Number of odd numbers: %d\n", odd);
    
    return 0;
}