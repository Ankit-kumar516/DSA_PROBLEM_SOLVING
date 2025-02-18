class Solution:
    def leaders(self, arr):
        # code here
        nums=[]
        mx=arr[len(arr)-1]
        nums.append(mx)
        for i in range(len(arr)-2, -1, -1):
            if arr[i]>=mx:
                mx=arr[i]
                nums.append(mx)
        return nums[::-1]
                