n,m = map(int,input().split(" "))
l = []
ans = 0
for i in range(n):
    l.append([])
    l[i].append(list(map(int,input().split(" "))))
    for j in range(m):
        l[i][0][j] %= 2
    for j in range(i-1,-1,-1):
        if (l[i] == l[j]):
            ans += 1
print(ans)
