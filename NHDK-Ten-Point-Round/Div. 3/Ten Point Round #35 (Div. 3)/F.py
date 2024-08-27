times = int(input())
for titititi in range(times):
    n,m = map(eval,input().split())
    ans = []
    for i in range(m):
        li = map(eval,input().split())
        for j in li:
            ans.append(j)

    for i in range(1,n+1):
        if(ans.count(i) == 0):
            print(i, end = ' ')
    print()