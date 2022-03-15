#include <iostream>
using namespace std;
int largestElement(int *arr,int n)
{
     int ans=0;
     for(int i=0;i<n;i++)
     {
           
           if(arr[i]>ans)
           {
                 ans = arr[i];
           }
     }

      return ans;
}

int main()
{
      int arr[] = {-3,4,1,2,3};
      int n = sizeof(arr)/sizeof(int);
      int l = largestElement(arr,n);
      cout <<"largest element is: "<<l<<endl;
      return 0;
} 
