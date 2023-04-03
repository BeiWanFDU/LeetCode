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


s = Solution()
print(s.lengthOfLongestSubstring("abcabcac"))
