# cook your dish here
from typing import List

class Solution:
    def minimum_bottles(self, arr: List[int], n: int, x: int) -> int:
        total_sum = sum(arr)
        if total_sum % x == 0:
            return total_sum // x
        else:
            return total_sum // x + 1

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        t -= 1
        n, x = map(int, input().split())
        a = list(map(int, input().split()))
        
        ob = Solution()
        print(ob.minimum_bottles(a, n, x))
