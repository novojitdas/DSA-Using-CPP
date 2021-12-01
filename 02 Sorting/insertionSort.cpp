#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
  // for how many times the sort will run 
  // insertion sort 
  for(int i=1; i<=n-1; i++)
  {
        //remember, current index is starts from 1
        // where previous index is 0
        int current = arr[i];
        int previous = i-1;
        /* compare current index with previous
        will run while if, (previous > current) */
        while(previous>=0 && arr[previous] > current) 
        {
              arr[previous+1] = arr[previous];
              previous = previous - 1;
        }
// if the condition is mismatched, we need to place current
     arr[previous+1]=current;
  }
}

int main()
{
    int arr[] = {-12, 3, 5, -2, 14, 8, -2, 17};
    int n = sizeof(arr) / sizeof(int);

    insertionSort(arr, n);

    for (auto x : arr)
    {
        cout << x << ",";
    }

    return 0;
}