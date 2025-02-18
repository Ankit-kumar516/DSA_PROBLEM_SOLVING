#User function Template for python3

class Solution:
    def pairWithMaxSum(self, arr):
        # Your code goes here
        sum=arr[0]+arr[1]
        for i in range(2, len(arr)):
            sum=max(sum, arr[i-1]+arr[i])
        return sum



#{ 
 # Driver Code Starts
#Initial Template for Python 3


def main():

    T = int(input())

    while (T > 0):
        a = [int(x) for x in input().strip().split()]
        ob = Solution()
        print(ob.pairWithMaxSum(a))
        print("~")
        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends