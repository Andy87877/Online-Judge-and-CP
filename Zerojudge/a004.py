# https://replit.com/@andy8787main/a004#main.py
# https://zerojudge.tw/ShowProblem?problemid=a004

# EOF要用try
try:
    while(True):
        n = eval(input())
        if (n % 400 == 0): #400倍數
            print("閏年")
        elif (((n % 4) == 0) and ((n % 100) != 0)): #4倍數 但不為100倍數
            print("閏年")
        else:
            print("平年")
except EOFError:
    pass
