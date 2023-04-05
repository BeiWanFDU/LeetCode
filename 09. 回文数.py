class Solution:

    def isPalindrome(self, x: int) -> bool:
        if (x < 0):
            return False
        a = x
        y = 0
        while (a > 0):
            y = y * 10 + a % 10
            a = a // 10
        return (x == y)


s = Solution()
if s.isPalindrome(121):
    print("yes")
else:
    print("no")
