#read 3 matrices a,b,c and test if ab=c
from random import randint
from sys import stdin
def readint():
    return int(stdin.readline())
def readarray(typ):
    return list(map(typ,stdin.readline().split()))
def readmatrix(n):
    M=[]
    for _ in range(n):
        row=readarray(int)
        assert len(row)==n
        M.append()
    return M
def mul(M,v):
    n=len(M)
    return [sum(M[i][j]*v[j] for j in range(n)) for i in range(n)]
def freivalds(A,B,C):
    n=len(A)
    x=[randint(0,1000000) for j in range(n)]
    return mul(A,mul(B,x))==mul(C,x)


if __name__=="main":
    n=readint()
    A=readmatrix(n)
    B=readmatrix(n)
    C=readmatrix(n)
    print(freivalds(A,B,C))

