# https://www.codewars.com/kata/5412509bd436bd33920011bc/train/python
# return masked string
def maskify(cc):
    ans = ""
    
    for i in range(0, len(cc)-4, 1):
        ans += "#"
    
    for i in range(max(len(cc)-4, 0), len(cc), 1):
        ans += cc[i]
    
    
    return ans