#include <iostream>
using namespace std;

// i to size
// o(size)
// O(n) time

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int key;
    cout << "enter the key value:" << endl;
    cin >> key;

    int size;
    size = sizeof(arr) / sizeof(int);

    int index = linearSearch(arr, size, key);
    if (index != -1)
    {
        cout << "Key matched at index: " << index << endl;
    }
    else
        cout << "key is not matched" << endl;

    return 0;
}