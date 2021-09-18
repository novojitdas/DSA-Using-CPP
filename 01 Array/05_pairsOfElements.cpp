#include <iostream>
using namespace std;

//Problem: Print all pairs of elements

// 2 solution:
// 1. using index
// 2. using for each loop
int printPairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int x = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            int y = arr[j];
            cout << x << ", " << y << endl;
        }
        cout << endl;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    printPairs(arr, size);

    return 0;
}