#include <iostream>
using namespace std;

void countEvenOdd(int *arr, int n, int *even, int *odd)
{
    *even = 0;
    *odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main()
{
    int arr[100], n;
    int even, odd;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    countEvenOdd(arr, n, &even, &odd);

    cout << "Number of even elements = " << even << endl;
    cout << "Number of odd elements = " << odd << endl;

    return 0;
}