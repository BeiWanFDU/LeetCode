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

//  Sliding Window

class Solution2
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.size() == 0)
            return 0;
        int ret = 1, left = 0, right = 1;
        unordered_set<char> se;
        se.insert(s[0]);
        while (right < s.size())
        {
            while (se.count(s[right]))
            {
                se.erase(s[left]);
                left++;
            }
            se.insert(s[right]);
            ret = max(ret, right - left + 1);
            right++;
        }
        return ret;
    }
};

int main()
{
    Solution2 s;
    cout << s.lengthOfLongestSubstring("abaaaaaa") << endl;
}