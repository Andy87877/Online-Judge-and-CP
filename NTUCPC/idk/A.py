X, Y, Z = map(int, input().split())
total = X+Y

ans = int(Z / total) * X
Z -= (int(Z / total)*total)
ans += min(X, Z)

print(ans)