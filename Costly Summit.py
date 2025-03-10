# cook your dish here
class Solution:
    def min_cost(self, t, cases):
        results = []

        for case in cases:
            n, c, s = case

            lang_count = [0] * 5
            for lang in s:
                lang_count[ord(lang) - ord('A')] += 1

            unique_langs = [i for i in range(5) if lang_count[i] > 0]
            min_cost = float('inf')
            total_langs = len(unique_langs)

            for mask in range(1 << total_langs):
                learn_count = bin(mask).count('1')
                not_covered = n

                for bit in range(total_langs):
                    if mask & (1 << bit):
                        not_covered -= lang_count[unique_langs[bit]]

                trans_cost = (not_covered * (not_covered + 1)) // 2
                total_cost = learn_count * c + trans_cost
                min_cost = min(min_cost, total_cost)

            results.append(min_cost)

        return results

if __name__ == "__main__":
    t = int(input())
    cases = []
    for _ in range(t):
        n, c = map(int, input().split())
        s = input().strip()
        cases.append((n, c, s))

    sol = Solution()
    result = sol.min_cost(t, cases)

    for res in result:
        print(res)