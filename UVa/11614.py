import math

t = int(input())
while t:
    n = int(input())
    #resolução direta de uma equação de grau 2 a partir
    #da soma dos termos de uma PA
    rows = int((math.sqrt(1 + 8*n) - 1) / 2)
    print(rows)
    t = t-1