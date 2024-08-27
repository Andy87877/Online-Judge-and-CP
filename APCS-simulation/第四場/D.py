# 放棄最後一題 找最大值啦 哈哈
n,m = map(eval, input().split(" "))
mx = -1

for i in range(m):
    a,b,c = map(eval, input().split(" "))
    mx = max(mx, c)

k = map(eval, input())

print(mx)