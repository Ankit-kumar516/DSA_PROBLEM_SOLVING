class Solution:
    #Function to find equilibrium point in the array.
    def findEquilibrium(self, arr):
        # code here
        total_sum = sum(arr)
        left_sum = 0
        for i in range(1, len(arr)):
            left_sum += arr[i - 1]
            if left_sum == total_sum - arr[i] - left_sum:
                return i
        return -1