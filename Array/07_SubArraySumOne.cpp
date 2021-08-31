#include <iostream>
using namespace std;

int largestSubarraysum(int arr[], int size)
{
    int largest_sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int subarray_sum = 0;
            for (int k = i; k <= j; k++)
            {
                subarray_sum += arr[k];
            }
            largest_sum = max(largest_sum, subarray_sum);
        }
    }
    return largest_sum;
}

int main()
{
    int arr[] = {-2, -3, 5, 4, 3, -11, 2, 1, 2};
    int size = sizeof(arr) / sizeof(int);

    cout << largestSubarraysum(arr, size) << endl;

    return 0;
}