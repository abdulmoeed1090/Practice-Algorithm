#include <iostream>
#include <vector>

using namespace std;

vector<string> split(const string &);
/*
 *Its base and height are both equal to .
 *It is drawn using # symbols and spaces.
 *The last line is not preceded by any spaces.
 *Write a program that prints a staircase of size .
 */

void staircase(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }

        for (int hash = 0; hash <= i; hash++)
        {
            cout << "#";
        }
        cout << endl;
    }
}