# https://replit.com/@andy8787main/a009#main.py
# https://zerojudge.tw/ShowProblem?problemid=a009

# 要用ASCII
s = input()

# 解
ans = ""
for i in s: # 一個一個數字慢慢帶
    ans += chr(ord(i)-7) # 轉換
print(ans)
