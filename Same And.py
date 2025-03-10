# cook your dish here
class Solution:
    def find_seq(self, t, cases):
        results = []
        for _ in range(t):
            n, m = cases[_]
            s = []
            s.append(n)

            for i in range(63):
                if (n >> i) & 1:
                    continue
                cand = n + (1 << i)
                if cand <= m:
                    s.append(cand)

            if len(s) < 2:
                results.append("-1")
            else:
                results.append(f"{len(s)}\n" + " ".join(map(str, s)))

        return results

if __name__ == "__main__":
    t = int(input())
    cases = [tuple(map(int, input().split())) for _ in range(t)]
    
    sol = Solution()
    result = sol.find_seq(t, cases)
    
    for res in result:
        print(res)