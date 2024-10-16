#include <bits/stdc++.h>
using namespace std;

int reversedNum = 0;

int reverse(int x)
{
    if (x == 0)
    {
        return reversedNum;
    }

    int remainder = x % 10;
    reversedNum = reversedNum * 10 + remainder;

    return reverse(x / 10);
}

int main()
{
    int n;
    cin >> n;

    int reverseNumber = reverse(n);

    if (n == reverseNumber)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}