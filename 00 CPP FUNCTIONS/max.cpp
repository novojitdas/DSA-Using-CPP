#include <iostream>
using namespace std;

int main()
{
    //problem: find the max between two numbers
    int a, b;
    int max;
    cin >> a;
    cin >> b;

    if (a > b)
    {
        max = a;
    }
    else
        max = b;

    cout << "max is: " << max << endl;

    return 0;
}