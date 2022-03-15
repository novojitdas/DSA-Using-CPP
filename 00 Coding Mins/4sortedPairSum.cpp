#include <iostream>
using namespace std;

void pairsum(int *arr,int n,int sum)
{
     int maxsum = 0;
     int currentSum = 0;
     int a=0;
     int b=0; 
     int i = 0;
     while(i<n)
     {
           for(int j=i+1;j<n;j++)
           {
                 currentSum = arr[i] + arr[j];
                 if(currentSum>maxsum)
                 {
                       if(currentSum<sum) {
                       maxsum = currentSum;
                       a = arr[i];
                       b = arr[j];
                       }
                 }
           }
           i=i+1;
     }
  
  cout <<a<<" and "<<b<<endl; 
}

int main()
{ 
      int arr[] = {10,22,28,29,30,40};
      int sum = 54;
      int n = sizeof(arr)/sizeof(int);
      pairsum(arr,n,sum);
     

}