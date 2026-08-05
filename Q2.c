#include <stdio.h>

int main() {
    int n, original, rev = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    original = n; // Save original number

    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if (original == rev)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}