# cook your dish here
class S:
    def slv(self):
        import sys
        inp = sys.stdin.read().split()
        t = int(inp[0])
        i = 1
        
        for _ in range(t):
            n = int(inp[i])
            i += 1
            a = list(map(int, inp[i:i + n]))
            i += n
            
            st = set()
            f = False
            
            for x in a:
                if x in st:
                    print(1)
                    print(x)
                    f = True
                    break
                st.add(x)
            
            if not f:
                print(-1)

if __name__ == "__main__":
    s = S()
    s.slv()