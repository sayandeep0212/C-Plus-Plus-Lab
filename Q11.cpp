#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int original = n;
    int sum = 0;
    int digit;

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    return sum == original;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";

    return 0;
}