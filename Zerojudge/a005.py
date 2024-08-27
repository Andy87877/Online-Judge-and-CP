# https://replit.com/@andy8787main/a005#main.py
# https://zerojudge.tw/ShowProblem?problemid=a005

times = eval(input())
for t in range(times):
    l = [int(i) for i in input().split(' ')] # 轉數字
    if (l[1]-l[0]) == (l[2]-l[1]): # 等差
        d = l[1]-l[0] # 等差
        print(" ".join([str(i) for i in l]),end=" ") # join裡的list是要用str
        print(l[3]+d)
    else:
        d = int(l[1]/l[0]) # 等比
        print(" ".join([str(i) for i in l]),end=" ") # join裡的list是要用str
        print(l[3]*d)
