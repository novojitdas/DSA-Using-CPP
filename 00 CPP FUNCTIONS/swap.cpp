#include <iostream>
using namespace std;

int main()
{
    // problem: swap two variable to each other.
    int a, b;
    int temp = 0;

    cout << "enter a:";
    cin >> a;
    cout << "\nenter b:" << endl;
    cin >> b;

    // main logic of swaping between 16-18 lines.
    temp = a;
    a = b;
    b = temp;

    cout << "a is:" << a << "\nb is:" << b << endl;

    return 0;
}