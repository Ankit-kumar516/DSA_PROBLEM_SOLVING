# cook your dish here
class Solution:
    def check_strings(self, t, cases):
        results = []

        for case in cases:
            n, a, b = case
            z = o = m = 0

            for i in range(n):
                if a[i] == b[i]:
                    if a[i] == '0':
                        z += 1
                    else:
                        o += 1
                else:
                    m += 1

            if n % 2 == 0:
                if z % 2 == 0 and o % 2 == 0 and m % 2 == 0:
                    results.append("YES")
                else:
                    results.append("NO")
            else:
                r = (z % 2) + (o % 2) + (m % 2)
                if r == 1:
                    results.append("YES")
                else:
                    results.append("NO")

        return results

if __name__ == "__main__":
    t = int(input())
    cases = []
    for _ in range(t):
        n = int(input())
        a = input().strip()
        b = input().strip()
        cases.append((n, a, b))

    sol = Solution()
    result = sol.check_strings(t, cases)

    for res in result:
        print(res)