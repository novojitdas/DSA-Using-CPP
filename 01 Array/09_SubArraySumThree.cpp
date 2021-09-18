#include <iostream>
using namespace std;

int kadaneSum(int arr[], int size)
{
    int current_sum = 0;
    int largest_sum = 0;

    for (int i = 0; i < size; i++)
    {
        current_sum = current_sum + arr[i];
        if (current_sum < 0)
        {
            current_sum = 0;
        }

        largest_sum = max(current_sum, largest_sum);
    }
    return largest_sum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);

    cout << kadaneSum(arr, size);

    return 0;
}