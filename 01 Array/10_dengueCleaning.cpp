#include <iostream>
using namespace std;

// int solvedIssue()
// solvedIssue = zone[i] - cleaned
// int addedIssue()
// int newTotalIssue, zone[i] = solvedIssue + newIssue

int main()
{
    int zone[] = {12, 29, 35, 50, 19, 32, 20};
    int size = sizeof(zone) / sizeof(int);

    // day 0

    int maxIssue = 0;
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (zone[i] > maxIssue)
        {
            maxIssue = zone[i];
            index = i;
        }
    }

    cout << "So zone " << index << " has total & Maximum issue:" << maxIssue;

    // regular update

    // int solvedIssue()
    // int addedIssue()

    return 0;
}