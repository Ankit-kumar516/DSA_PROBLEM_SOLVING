class Solution:
    def missingNumber(self, nums):
        s = set(nums)
        i = 0
        while True:
            if i not in s:
                return i
            i += 1


        