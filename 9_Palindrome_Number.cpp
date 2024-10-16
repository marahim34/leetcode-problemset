#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverseNum = 0;

    int reverse(int x)
    {
        if (x == 0)
        {
            return reverseNum;
        }

        int remainder = x % 10;

        if (reverseNum > (INT_MAX - remainder) / 10)
        {
            return 0;
        }

        reverseNum = reverseNum * 10 + remainder;

        return reverse(x / 10);
    }

    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        reverseNum = 0;

        int reverseNumber = reverse(x);
        return reverseNumber == x;
    }
};
