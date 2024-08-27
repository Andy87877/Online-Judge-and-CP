a = 1
b = 1
ans = 0
n = eval(input())
for i in range(n-2):
    ans = a+b
    a = b
    b = ans
print(ans)