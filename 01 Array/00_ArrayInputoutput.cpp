#include <iostream>
using namespace std;

int main()
{
    int student;
    cout << "Enter the number of students:" << endl;
    cin >> student;

    int marks[10] = {0}; // it contains garbage values by default
    //   another way to decalare array
    //  int arr[10] = {0}; which contains all value as 0 by default

    // input
    for (int i = 0; i < student; i++)
    {
        cin >> marks[i];
        // update
        marks[i] = marks[i] * 2;
    }

    // output
    for (int i = 0; i < student; i++)
    {
        cout << marks[i] << ", ";
    }

    return 0;
}