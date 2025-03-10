# cook your dish here
class Solution:
    def solve(self, T, test_cases):
        for t in range(T):
            N, X, A = test_cases[t]
            freq = {}
            pos = {}
            
            for i in range(N):
                if A[i] not in freq:
                    freq[A[i]] = 0
                    pos[A[i]] = []
                freq[A[i]] += 1
                pos[A[i]].append(i)

            ans = max(freq.values())

            if X == 1:
                print(ans)
                continue

            for v, indices in pos.items():
                Y = v * X
                origY = freq.get(Y, 0)

                merged = []
                for idx in indices:
                    merged.append((idx, 1))

                if Y in pos:
                    for idx in pos[Y]:
                        merged.append((idx, -1))

                merged.sort(key=lambda x: x[0])

                best_sum = float('-inf')
                current_sum = 0
                for idx, value in merged:
                    current_sum = max(value, current_sum + value)
                    best_sum = max(best_sum, current_sum)

                if best_sum < 0:
                    best_sum = 0

                ans = max(ans, origY + best_sum)

            print(ans)

# Reading input
T = int(input())
test_cases = []

for _ in range(T):
    N, X = map(int, input().split())
    A = list(map(int, input().split()))
    test_cases.append((N, X, A))

# Create an instance of Solution and solve
sol = Solution()
sol.solve(T, test_cases)