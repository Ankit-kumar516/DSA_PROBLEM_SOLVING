# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    e = 0  # Count of even numbers
    o = 0  # Count of odd numbers

    for i in range(n):
        if a[i] % 2 == 0:
            e += 1
        else:
            o += 1

    print(max(e, o))