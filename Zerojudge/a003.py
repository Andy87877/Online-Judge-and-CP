# https://replit.com/@andy8787main/a003#main.py
# https://zerojudge.tw/ShowProblem?problemid=a003
 
m,d = [int(i) for i in input().split(' ')] #分割字串轉數字
s = (m*2+d)%3
if (s == 0):
    print("普通")
elif (s == 1) :
    print("吉")
else:
    print("大吉")
