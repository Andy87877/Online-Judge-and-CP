# https://www.codewars.com/kata/572b77262bedd351e9000076/train/python
def first(seq, n = 1): 
    return seq[0: min(n,len(seq)): 1]