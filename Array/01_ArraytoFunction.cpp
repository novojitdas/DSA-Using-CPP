#include <iostream>
using namespace std;

void printArray(int *arr, int n)
{
    cout << "In Function " << sizeof(arr) << endl; // to see size of pointer
    arr[0] = 100;
    // loop for display
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};    // 6*4 = 24 bytes
    int n = sizeof(arr) / sizeof(int); // 24 / 4 = 6

    // to see that, when we pass array to a function for updating
    // its does not create a new array
    // it works with the existing fuction and update the array.
    // so we called function first then in main to display to prove no changes

    printArray(arr, n);

    cout << "In Main " << sizeof(arr) << endl; // to see size of array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}