n=list(map(int,input().strip().split(" ")))
r=filter(lambda num: num%2, n)
for i in r:
    print(i,end=" ")