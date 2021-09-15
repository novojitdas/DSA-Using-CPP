#include <iostream>
using namespace std;

int prefixSubArraySum(int arr[], int size)
{
    //making a prefix array
    int prefix[size] = {0};
    prefix[0] = arr[0];

    for (int i = 1; i < size; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // largest sum logic
    int largest_sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            // end - previous value of start (i-1th position)
            int subArraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            largest_sum = max(largest_sum, subArraySum);
        }
    }
    return largest_sum;
}

int main()
{
    int arr[] = {-2, -3, 5, 4, 3, -11, 2, 1, 2};
    int size = sizeof(arr) / sizeof(int);
    cout << prefixSubArraySum(arr, size) << endl;

    return 0;
}