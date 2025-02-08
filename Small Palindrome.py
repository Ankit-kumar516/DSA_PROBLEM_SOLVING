# cook your dish here
class Solution:
    def Small_Palindrome(self, x, y):
        prefix = ""
        suffix = ""

        while x >= 2:
            prefix += '1'
            suffix = '1' + suffix
            x -= 2

        while y >= 2:
            prefix += '2'
            suffix = '2' + suffix
            y -= 2

        if x == 1:
            prefix += '1'
        elif y == 1:
            prefix += '2'

        result = prefix + suffix
        return result


t = int(input())
for _ in range(t):
    x, y = map(int, input().split())
    ob = Solution()
    print(ob.Small_Palindrome(x, y))
