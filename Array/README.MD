# Array

An array is a collection of elements of the same type placed in contiguous memory locations.

### Table of Contents

- [Operations](https://github.com/novojitdas/DSA-Using-CPP/tree/main/Array#1-operations)
  
- [Declaration](https://github.com/novojitdas/DSA-Using-CPP/tree/main/Array#2-declaration)
- [Array Passed By Reference to a Function](https://github.com/novojitdas/DSA-Using-CPP/tree/main/Array#3-array-passed-by-reference-to-a-function)
- [Linear search using array](https://github.com/novojitdas/DSA-Using-CPP/tree/main/Array#4-linear-search-using-array)
- [Binary Search using array](https://github.com/novojitdas/DSA-Using-CPP/tree/main/Array#5-binary-search-using-array)
  * [BINARY SEARCH TIME COMPLEXITY CALCULATION]()
- [Practice Problems](https://github.com/novojitdas/DSA-Using-CPP/tree/main/Array#7-practice-problems)
- [Sub-Array](https://github.com/novojitdas/DSA-Using-CPP/tree/main/Array#8-sub-array)


### 1. Operations 
- Creation 
- Input 
- Output 
- Update 

### 2. Declaration
```cpp
// Creating an Array 
// datatype array_name[size]

int a[100]; // contains garbage values
int a[100] = {0}; // first index is 0 and remaining element is 0 by default 
int a[100] = {1,2,3}; // remaining element is 0 by default
int a[] = {1,2,3}; // size is optional

string colors[4] = {"red","green","blue"}; // array of complex datatype

```

### 3. Array Passed By Reference to a Function

<p align="center">
  <br>
  <a href=""><img src="https://i.imgur.com/VE89baX.png" alt=""></a>
  <br>
  <strong>When we are calling the printArray Function we are not sending the values of the array. we are just sending the address value of the array. So size of that pointer ( int arr[] or int *arr) is 8 bytes only. For that reason, the value of the n = sizeof(pointer)/sizeof(int) = 8/4 = 2. which is wrong in this case. for solving this problem we need to send the value of n into the function parameter from main function. </strong>
  <br>
</p> 

- [Array Input Output](https://github.com/novojitdas/DSA-Using-CPP/blob/main/Array/00_ArrayInputoutput.cpp)
- [Array To Function](https://github.com/novojitdas/DSA-Using-CPP/blob/main/Array/01_ArraytoFunction.cpp)


### 4. Linear search using array
In computer science, a **linear search algorithm** or **sequential search** is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.complexity of linear search is **O(n)**
**PESUDOCODE**
```cpp
1. take an array[]
2. take an size variable called "n"
3. loop through 0 to n

for (int i=0;i<n;i++) // where n is the size of array
    if(array[i]==key) // key is the target value when we are searching
     {
       return i;
     }
     else
        return -1;

```
- [Linear Search Code](https://github.com/novojitdas/DSA-Using-CPP/blob/main/Array/02_linearSearch.cpp)

### 5. Binary Search using array

Binary search only works on sorted data structures. This algorithm repeatedly target the center of the **sorted data or monotonic** structure & divide the search space into half till the match is found.
The time complexity of binary search algorithm is O(Log n).
<p align="center">
  <br>
  <a href=""><img src="https://i.imgur.com/PTu0oqp.png" alt=""></a>
  <br>
  <strong>Visual of Binary Search</strong>
  <br>
</p> 

1. Search the sorted array by repeatedly dividing the search interval in half
2. Begin with an interval covering the whole array.
3. If The value of the search key is same as the value of the middle, then middle index will be returned.
4. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half or left.
5. Otherwise narrow it to the upper half or right.
6. Repeatedly check until the value is found or start value is less than end.

##### PESUDOCODE

```cpp
start = 0 
end = n-1
key = user defined or fixed

  while(start<end) {
    mid = (start+end)/2 

    if(arr[mid]==key)
    {
      return mid;
    }
    else if (key<arr[mid])
    {
      // go to left or lower 
      end = mid - 1;
    }
    else 
    {
      // go to right or upper
      start = mid + 1;
    }
  }

// exits the while loop
// if start is bigger than end
return -1;

```
- [Binary Search Code](https://github.com/novojitdas/DSA-Using-CPP/blob/main/Array/03_binarySearch.cpp)

**BINARY SEARCH TIME COMPLEXITY CALCULATION** 


<p align="center">
  <br>
  <a href="https://www.youtube.com/watch?v=4UNkQcBrLaQ"><img src="https://i.imgur.com/stR1ovQ.png" alt=""></a>
  <br>
  <strong>LOG BASICS (CLICK ON IMAGE TO VIEW THE VIDEO)</strong>
  <br>
</p> 

<p align="center">
  <br>
  <a href=""><img src="https://i.imgur.com/BrNRgDJ.jpg" alt=""></a>
  <br>
  <strong>HAND NOTE - BINARY SEARCH</strong>
  <br>
</p> 

### 7. Practice Problems 

1. [reverse all the elements of given array](https://github.com/novojitdas/DSA-Using-CPP/blob/main/Array/04_reverseArray.cpp)
2. [Print all pairs of elements](https://github.com/novojitdas/DSA-Using-CPP/blob/main/Array/05_pairsOfElements.cpp) 

##### Solutions 
<p align="center">
  <br>
  <a href=""><img src="https://i.imgur.com/rlbJbMq.jpg" alt=""></a>
  <br>
  <strong>reverse all the elements of given array</strong>
  <br>
</p>

<p align="center">
  <br>
  <a href=""><img src="https://i.imgur.com/MdqOJ1U.png" alt=""></a>
  <br>
  <strong>Print all pairs of elements</strong>
  <br>
</p>

### 8. Sub-Array

- sub array is a **smaller contiguous part** of an array.
- sub array can be only **one element**

##### Practice Problems 
1. [Print all sub-array of a given array](https://github.com/novojitdas/DSA-Using-CPP/blob/main/Array/06_PrintAllSubarray.cpp)
2. [Print sub-array sum of a given array - using brute force](https://github.com/novojitdas/DSA-Using-CPP/blob/main/Array/07_SubArraySumOne.cpp)
3. [Print sub-array sum of a given array - using prefix array]()
4. [Print sub-array sum of a given array - using kadane's algorithm]()

##### Solution 
 
<p align="center">
  <br>
  <a href=""><img src="https://i.imgur.com/g8Gghky.png" alt=""></a>
  <br>
  <strong>Print sub-array sum of a given array - using prefix array</strong>
  <br>
</p>



