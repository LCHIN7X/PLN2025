import sys
from math import comb

money = sys.stdin.read().split()
mod = 10**9 +7
ptr = 0
t = int(money[ptr])
ptr += 1

for _ in range(t):

    n,m = map(int,money[ptr:ptr+2])
    ptr += 2
    v = list(map(int,money[ptr:ptr+n]))
    ptr += n

    v.sort(reverse=True)
    angpau = v[m-1]
    f_angpao = v.count(angpau)
    m_angpao = v[:m].count(angpau)

    t_angpao = comb(f_angpao, m_angpao) % mod
    print(t_angpao)







