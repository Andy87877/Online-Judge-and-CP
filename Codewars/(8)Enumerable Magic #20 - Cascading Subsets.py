# https://www.codewars.com/kata/545af3d185166a3dec001190/train/python
def each_cons(lst, n):
    answer = []
    
    for i in range(len(lst)-n+1):
        answer.append(lst[i:i+n])
        
    return answer