# cook your dish here
for _ in range(int(input())):
    n=int(input())
    c=0
    C=input()
    A=input()
    for i in range(n):
        c+=1 if(C[i]==A[i]) else 0
    W=list(map(int,input().split()))
    if(c<n):
        print(max(W[:c+1]))
    else:
        print(W[c])
