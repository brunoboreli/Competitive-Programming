tc = int(input())

while tc:
    n = int(input())
    print(n,"is even") if abs(n)%2==0 else print(n,"is odd")
    tc = tc - 1