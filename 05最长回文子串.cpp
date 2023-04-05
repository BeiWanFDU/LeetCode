#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int count = 0;
        int start;
        for (int i = 0; i < s.size(); i++)
        {

            int j = 0;
            for (; i - j >= 0 && i + j < s.size(); j++)
            {
                if (s[i - j] != s[i + j])
                    break;
            }
            if (2 * j - 1 > count)
            {
                count = 2 * j - 1;
                start = i - j + 1;
            }

            int k = 0;
            for (; i - k >= 0 && i + k + 1 < s.size(); k++)
            {
                if (s[i - k] != s[i + k + 1])
                    break;
            }
            if (2 * k > count)
            {
                count = 2 * k;
                start = i - k + 1;
            }
        }
        return s.substr(start, count);
    }
};

int main()
{
    Solution s;
    cout << s.longestPalindrome("babad");
}