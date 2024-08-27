n,m = map(int,(input().split(" ")))
v = map(int,(input().split(" ")))
dic = {}

temp = 0
for i in v:
    dic[temp+1] = i
    temp += 1

now = 1
for i in range((m-1)%n):
    # print(now)
    now = (dic[now])
print(now)