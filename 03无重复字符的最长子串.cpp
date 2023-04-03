#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

// 暴力解法
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int ret = 0;
        for (int i = 0; i < s.size(); i++)
        {
            unordered_set<char> se;
            int count = 0;
            for (int j = i; j < s.size(); j++)
            {
                if (!se.count(s[j]))
                {
                    se.insert(s[j]);
                    count++;
                }
                else
                    break;
            }
            ret = max(ret, count);
        }
        return ret;
    }
};

int main()
{
    Solution s;
    cout << s.lengthOfLongestSubstring("abcdegfhijklmnopqrstu");
}