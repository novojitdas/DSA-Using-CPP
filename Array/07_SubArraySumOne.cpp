#include <iostream>
using namespace std;
// time complexcity O(N)^3

int largestSubarraysum(int arr[], int size)
{
    // largest sum
    int largest_sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            // current sum, will be zero at each sub-array's beginning
            int subarray_sum = 0;
            for (int k = i; k <= j; k++)
            {
                subarray_sum += arr[k];
            }
            // will compare 2 variable and store the largest
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