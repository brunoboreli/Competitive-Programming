x = int(input())
n = int(input())
ac = 0
while n:
    p = int(input())
    ac = ac + x - p

    n = n-1

print(ac + x)