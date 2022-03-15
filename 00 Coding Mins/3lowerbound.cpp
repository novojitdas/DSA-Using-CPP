#include <iostream>
using namespace std;

int lowerbound(int *arr,int n,int key)
{
     int temp = 0;
     int max = 0;
     for(int i=0;i<n;i++)
     {
        if(arr[i]==key)
        {
              return key;
        }
        else if(arr[i]<key)
        {
              temp = arr[i];
              if(temp>max)
              {
                    max = temp;
              }
        }
     }
     if(max>0)
   return max;
   else 
   return -1;
}

int main()
{ 
      int arr[] = {-1,-1,2,3,5};
      int key = 4;
      int n = sizeof(arr)/sizeof(int);
      int max = lowerbound(arr,n,key);
      cout<<"Output:"<<max<<endl;

}