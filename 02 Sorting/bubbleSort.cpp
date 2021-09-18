#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // times means how many times the sorting process will run
    // normally bubble sort runs 1 to n-1 times.
    for (int times = 1; times < n - 1; times++)
    {
        for (int j = 0; j < n - 1 - times; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {-12, 3, 5, -2, 14, 8, -2, 17};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);

    for (auto x : arr)
    {
        cout << x << ",";
    }

    return 0;
}