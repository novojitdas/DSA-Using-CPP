#include <iostream>
using namespace std;

void selectionSort(int arr[],int n)
{
      // forloop, which will run 0 to n-2 (2nd last index)
   for(int position=0; position<=n-2; position++)
   {
         int min_position = position; // assuming this index is holding minimum value
         // find the minimum 
         for(int j=position;j<n;j++)
         {
               if(arr[j]<arr[min_position])
               {
                     min_position = j;
               }
         }
            // swap outside the loop
            swap(arr[min_position],arr[position]);
   }

}


int main(){

int arr[] = {-12, 3, 5, -2, 14, 8, -2, 1};
    int n = sizeof(arr) / sizeof(int);

    selectionSort(arr, n);

    for (auto x : arr)
    {
        cout << x << ",";
    }

      return 0;
}