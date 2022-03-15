#include <iostream>
using namespace std;

int subarray(int *arr,int n)
{
      int cs=0;
      int ms=0;
    for(int i=0;i<n;i++)
    {
          cs = cs + arr[i];
          if(cs<0)
          {
                cs = 0;
          }
          if(cs>ms)
          {
                ms = cs;
          }
    }
    return ms;
}

int main()
{ 
      int arr[] = {1,-2,3,-2,4,3};
      int n = sizeof(arr)/sizeof(int);
      int max = subarray(arr,n);
      cout<<"SubArray Sum:"<<max<<endl;

}
