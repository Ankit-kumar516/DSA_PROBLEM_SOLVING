class Solution(object):
    def rearrangeArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        arr = [0] * len(nums)  
        pos_index, neg_index = 0, 1  

        for num in nums:
            if num > 0:
                arr[pos_index] = num
                pos_index += 2 
            else:
                arr[neg_index] = num
                neg_index += 2  

        return arr
