class Solution:
    def moveZeroes(self, nums):
        n = len(nums)
        i = 0
        j = 0
        while i < n:
            if nums[i] != 0:
                nums[j] = nums[i]
                j += 1
            i += 1
        while j < n:
            nums[j] = 0
            j += 1

