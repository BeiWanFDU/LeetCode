#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int a = x;
        if (a < 0)
            return false;
        long int y = 0;
        while (a > 0)
        {
            y = y * 10 + a % 10;
            a = a / 10;
        }
        return (x == y);
    }
};

int main()
{
    Solution s;
    if (s.isPalindrome(121))
    {
        cout << "yes" << endl;
    }
    else
        cout << "no" << endl;
}