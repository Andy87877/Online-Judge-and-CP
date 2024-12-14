# https://www.codewars.com/kata/5844a422cbd2279a0c000281/train/python
def multi(l_st):
    ans = 1
    for i in l_st:
        ans *= i
    return ans

def add(l_st):
    ans = 0
    for i in l_st:
        ans += i
    return ans

def reverse(st):
    ans_st = ""
    for i in range(len(st)-1,-1,-1):
        ans_st += st[i]
    return ans_st