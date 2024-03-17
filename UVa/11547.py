import math
tc = int(input())
while tc:
    n = (((((int(input())*567)/9) + 7492) * 235)/47) - 498
    print(math.floor((abs(n) / 10)) % 10)
    tc = tc-1