#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end) // loop will run until,if start is less than end
    {
        int mid = (start + end) / 2;
        if (key == arr[mid])
        {
            return mid; // only return mid
        }
        else if (arr[mid] > key)
        {
            // move to left portion
            end = mid - 1;
        }
        else
        {
            // move to right portion
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    // size of the array
    int size = sizeof(arr) / sizeof(int); // sizeof(array)/sizeof(datatype) = total elements of array
    int key;
    cout << "Please Enter The Key:" << endl;
    cin >> key;

    int index = binarySearch(arr, size, key);

    if (index != -1)
    {
        cout << "Key matched at index: " << index << endl;
    }
    else
        cout << "key is not matched" << endl;

    return 0;
}