n = eval(input())
x = []
y = []

ans = 0
for i in range(n):
    a,b = map(eval, input().split())
    x.append(a)
    y.append(b)

for i in range(n-1):
    ans += x[i]*y[i+1]
    ans -= y[i]*x[i+1]
ans += x[n-1]*y[0]
ans -= y[n-1]*x[0]

print(abs(ans)/2)