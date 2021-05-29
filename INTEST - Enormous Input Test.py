from sys import stdin
n,k=stdin.readline.split()
#n,k = list(map(int,input().split()))
count=0
for _ in range(n):
    if (int(input())%k==0):
        count+=1
print(count)
