# 暴力解法
class Solution:

    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        ret = 0
        for i in range(n):
            count = 0
            se = set()
            for j in range(i, n):
                if s[j] in se:
                    break
                else:
                    se.add(s[j])
                    count += 1
            ret = max(ret, count)
        return ret


# 滑动窗口
class Solution2:

    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) == 0:
            return 0
        left = 0
        right = 1
        ret = 1
        se = {s[0]}
        while right < len(s):
            while s[right] in se:
                se.remove(s[left])
                left += 1
            se.add(s[right])
            ret = max(ret, right - left + 1)
            right += 1
        return ret


s = Solution2()
print(s.lengthOfLongestSubstring("abcabcac"))
