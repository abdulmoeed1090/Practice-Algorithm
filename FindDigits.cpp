#include <iostream>
#include <vector>
using namespace std;
int findDigits(int n)
{
    /*An integer d is a divisor of an integer n if the remainder of
Given an integer, for each digit that makes up the integer determine whether it is a divisor. Count the number of divisors occurring within the integer.*/
    int originalNumber = n;
    int count = 0;

    while (n > 0)
    {
        int digit = n % 10;

        if (digit != 0 && originalNumber % digit == 0)
        {
            count++;
        }

        n /= 10;
    }

    return count;
}
