#include <iostream>
#include <vector>

using namespace std;
vector<string> split(const string &);

/*
 *Given an array of integers.
 *calculate the ratios of its elements that are positive, negative  and zero.
 *Print the decimal value of each fraction on a new line with  places after the decimal.
 */

void plusMinus(vector<int> arr)
{
    int size = arr.size();
    int positive = 0;
    int negative = 0;
    int zeros = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zeros++;
        }
    }

    cout << (double)positive / (double)size << endl;
    cout << (double)negative / (double)size << endl;
    cout << (double)zeros / (double)size << endl;
}