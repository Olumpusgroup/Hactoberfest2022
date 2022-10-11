for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    va=max(l)
    i=l.index(va)
    if va==l[0]:
        print("-1")
    else:
        a=l[0:i]
        b=l[i:]
        print(len(a))
        print(*a)
        print(len(b))
        print(*b)
