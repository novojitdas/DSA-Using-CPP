#include <iostream>
#include<vector>
using namespace std;

int krotate(int *arr,int n,int x)
{
      int w = 0;
      while(w<x){
      int temp = arr[n-1];
      for(int i=n-2;i>=0;i--)
      {
            arr[i+1] = arr[i]; 
      }
      arr[0] = temp;
      w = w+1;
      }
      //print
      for(int i=0;i<n;i++)
      {
            cout <<"\n"<<arr[i];
      }
}

int main()
{ 
      int arr[] = {1,3,5,7,9};
      int x = 2;
      int n = sizeof(arr)/sizeof(int);
      krotate(arr,n,x);


}