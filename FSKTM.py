n,m = map(int,input().split())
time = list(map(int,input().split()))

x = max(time)
y = sum(time)
z = y


while  x <= y:
    mp = (x+y)//2

    slot = 1
    sum_num = 0
    for times in time:
        if (sum_num + times > mp):
            slot += 1
            sum_num = times
        else:
            sum_num += times
    
    if slot <= m:
        z = mp
        y = mp-1

    else:
        x = mp+1

print(z)


    
