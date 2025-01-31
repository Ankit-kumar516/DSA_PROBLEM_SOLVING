class Solution:
    def calc(self, m, k, s):
        p = [0] * (m + 1)
        for i in range(1, m + 1):
            p[i] = p[i - 1] + (1 if s[i - 1] == 'S' else 0)

        mn = 0
        if m >= 2:
            for t in range(1, m):
                tmp = k - p[t] + t
                mn = max(mn, tmp)
        else:
            mn = m

        mx = m + k - p[m] - 1
        return max(mx, max(mn, m))


t = int(input().strip())
sol = Solution()

for _ in range(t):
        m, k = map(int, input().strip().split())
        s = input().strip()
        print(sol.calc(m, k, s))
  
