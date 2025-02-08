# cook your dish here
class Solution:
    def findMaxStreak(self, N, X, A):
        maxStreak = 1
        curStreak = 1

        for i in range(1, N):
            if A[i] >= A[i - 1]:
                curStreak += 1
                maxStreak = max(maxStreak, curStreak)
            else:
                curStreak = 1

        bestStreak = maxStreak

        for i in range(N):
            modA = A[:]
            modA[i] *= X

            maxStreak = 1
            curStreak = 1

            for j in range(1, N):
                if modA[j] >= modA[j - 1]:
                    curStreak += 1
                    maxStreak = max(maxStreak, curStreak)
                else:
                    curStreak = 1

            bestStreak = max(bestStreak, maxStreak)

        return bestStreak


t = int(input())

for _ in range(t):
    N, X = map(int, input().split())
    A = list(map(int, input().split()))

    sol = Solution()
    print(sol.findMaxStreak(N, X, A))
