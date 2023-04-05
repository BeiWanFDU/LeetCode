class Solution:

    def longestPalindrome(self, s: str) -> str:
        count = 0
        start = 0
        i = 0
        while (i < len(s)):
            j = 0
            while (i - j >= 0 and i + j < len(s)):
                if s[i - j] != s[i + j]:
                    break
                j += 1
            if (2 * j - 1 > count):
                count = 2 * j - 1
                start = i - j + 1

            k = 0
            while (i - k >= 0 and i + k + 1 < len(s)):
                if s[i - k] != s[i + k + 1]:
                    break
                k += 1
            if (2 * k > count):
                count = 2 * k
                start = i - k + 1

            i += 1
        return s[start:start + count]


s = Solution()
print(s.longestPalindrome("bqqb"))