#include <iostream>
#include <vector>

using namespace std;

/*
 *In this challenge, you are required to calculate and print the sum of the elements in an array,
 *keeping in mind that some of those integers may be quite large.
 */
long aVeryBigSum(vector<long> ar)
{
    long int sum = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        sum += ar[i];
    }
    return sum;
}