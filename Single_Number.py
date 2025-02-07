class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        s=set()
        s.add(nums[0])
        for i in range(1, len(nums)):
            if nums[i] in s:
                s.remove(nums[i])
            else:
                s.add(nums[i])
        return next(iter(s))
        