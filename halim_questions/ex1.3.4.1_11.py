n = int(input())

result = "Prime"

for i in range(2,n):
    if n % i == 0:
        result = "Composite"
        break;

print(result)