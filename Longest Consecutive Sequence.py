class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums)==0:
            return 0
        num_set=set(nums)
        count = 1
        mx_count=1
        y = float('-inf')
        for x in sorted(num_set):
            if x==y+1:
                count+=1
                mx_count=max(mx_count, count)
                y=x
            else:
                count = 1
                y=x
        return mx_count