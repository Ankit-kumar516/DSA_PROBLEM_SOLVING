class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        temp=0
        count=0
        for i in range(len(nums)):
            if nums[i] != 0:
                temp=temp+1;
                count=max(temp, count);
            else:
                temp=0;
        return count

        