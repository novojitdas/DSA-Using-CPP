#include <iostream>
#include <algorithm>
using namespace std;

int main(){
      int arr[] = {2,4,12,3,5,17,28,23,19};
      int n = sizeof(arr)/sizeof(int);
       /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/
      sort(arr,arr + n);

      for(int x: arr)
      {
            cout << x <<" "; 
      }
return 0;
}