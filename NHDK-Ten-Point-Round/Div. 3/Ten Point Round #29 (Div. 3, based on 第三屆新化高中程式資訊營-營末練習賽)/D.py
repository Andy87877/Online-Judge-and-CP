n = float(input())
n *= 1000000000
temp = 0
flag = False
while (n%10 == 0):
    n /= 10
    temp += 1
    if (temp >= 69):
        flag = True
        break
if (flag) :
    print(0)
else:
    print(int(n))