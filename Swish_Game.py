# cook your dish here
class Atulaya:
    def calculate(self, m, k, s):
        p = [0] * (m + 1) 
        for i in range(1, m + 1):
            p[i] = p[i - 1] + (1 if s[i - 1] == 'S' else 0)

        min_n = 0
        if m >= 2:
            for t in range(1, m):
                temp = k - p[t] + t
                min_n = max(min_n, temp)
        else:
            min_n = m

        max_n = m + k - p[m] - 1
        n = max(max_n, max(min_n, m))
        return n


t = int(input())
adv = Atulaya()

for _ in range(t):
    m, k = map(int, input().split())
    s = input().strip()
    print(adv.calculate(m, k, s))
