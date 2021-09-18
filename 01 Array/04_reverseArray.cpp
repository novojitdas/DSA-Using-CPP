#include <iostream>
using namespace std;
// Problem: reverse all the elements of given array
int reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        // we will swap first index (start) with last index (end)
        // then start++ (to right) and end-- (to left)
        swap(arr[start], arr[end]);
        start += 1;
        end -= 1;
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 6, 8, 11, 12};
    int size = sizeof(arr) / sizeof(int);

    cout << "Original Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    reverseArray(arr, size);

    cout << "\nReversed Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}