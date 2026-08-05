#include <stdio.h>

int main() {
    int n, original, rem, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    if (original == sum)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}