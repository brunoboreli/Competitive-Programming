import math

tc = int(input())
while tc:
    tc = tc-1
    n, m = input().split()

    print(math.floor(int(n)/3) * math.floor(int(m)/3))