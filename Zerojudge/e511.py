# https://replit.com/@andy8787main/e511#main.py
# https://zerojudge.tw/ShowProblem?problemid=e511

times = eval(input())
for t in range(times):
    n = eval(input())
    l = [int(i) for i in input().split(' ')]
    ans = (((max(l))-(min(l)-1))*2)-2; #好像是還要回到停車位的路程
    print(ans)
