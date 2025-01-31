# cook your dish here
class Advitiya:
    def __init__(self):
        self.t = "ADVITIYA"

    def min_steps(self, s):
        st = 0
        for i in range(8):
            d = (ord(self.t[i]) - ord(s[i])) % 26
            st += d
        return st


n = int(input())
adv = Advitiya()

for _ in range(n):
    s = input().strip()
    print(adv.min_steps(s))
