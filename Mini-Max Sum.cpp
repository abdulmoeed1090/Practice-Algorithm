#include <iostream>
#include <vector>
using namespace std;

/*
*Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers.   *Then print the respective minimum and maximum values as a single line of two space-separated long integers.
*/



void miniMaxSum(vector<int> arr)
{
    long int sum = 0;
    long int max = 0;
    long int min = arr[0];
    long int maxSum = 0;
    long int minSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int current = arr[i];
        sum += current;
        if (current > max)
        {
            max = current;
        }
        if (current < min)
        {
            min = current;
        }
    }
    maxSum = sum - min;
    minSum = sum - max;
    cout << minSum << " " << maxSum;
}