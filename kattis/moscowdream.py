a,b,c,n = input().split()

if int(a)>=1 and int(b)>=1 and int(c)>=1 and int(n) >= 3:
    if int(a)+int(b)+int(c) >= int(n):
        print("YES")
    else:
        print("NO")
else:
    print("NO")
