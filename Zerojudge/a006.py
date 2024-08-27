# https://replit.com/@andy8787main/a006#main.py
# https://zerojudge.tw/ShowProblem?problemid=a006

a,b,c = [int(i) for i in input().split(' ')] # 輸入
d = b**2-(4*a*c) # 判斷式
if (d < 0):# 無解
    print("No real root")
elif (d == 0): # 相同解
    ans = int((-1*b)/(2*a))
    print("Two same roots x=%d"%(ans))
else: # 兩解
    d = d**0.5
    ans1 = int((-1*b+d)/(2*a))
    ans2 = int((-1*b-d)/(2*a))
    print("Two different roots x1=%d , x2=%d"%(ans1,ans2))
