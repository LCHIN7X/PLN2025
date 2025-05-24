n = int(input())
state = [input().strip() for _ in range(n)]
total = 0

for i in range(n):
    if state[i] =='W':
        total += 2 ** (n-1-i)

print(total)