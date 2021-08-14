# Array

An array is a collection of elements of the same type placed in contiguous memory locations.

### Operations 
- Creation 
- Input 
- Output 
- Update 

### Declaration
```cpp
// Creating an Array 
// datatype array_name[size]

int a[100]; // contains garbage values
int a[100] = {0}; // first index is 0 and remaining element is 0 by default 
int a[100] = {1,2,3}; // remaining element is 0 by default
int a[] = {1,2,3}; // size is optional

string colors[4] = {"red","green","blue"}; // array of complex datatype

```

### Array Passed By Reference to a Function

<p align="center">
  <br>
  <a href=""><img src="https://i.imgur.com/VE89baX.png" alt=""></a>
  <br>
  <strong>When we are calling the printArray Function we are not sending the values of the array. we are just sending the address value of the array. So size of that pointer ( int arr[] or int *arr) is 8 bytes only. For that reason, the value of the n = sizeof(pointer)/sizeof(int) = 8/4 = 2. which is wrong in this case. for solving this problem we need to send the value of n into the function parameter from main function. </strong>
  <br>
</p> 

### Array using linear search
**PESUDOCODE**
```
for (i to sizeOfArray)
    if(array[i]==key)
     {
       return i;
     }
     else
        return -1;

```
