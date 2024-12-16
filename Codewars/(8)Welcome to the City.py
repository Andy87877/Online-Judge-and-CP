# https://www.codewars.com/kata/5302d846be2a9189af0001e4/train/python

def say_hello(name, city, state):
    answer = "Hello,"
    for n in name:
        answer += " "
        answer += n
    answer += "! "
    
    answer += "Welcome to "
    answer += city
    answer += ", "
    answer += state
    answer += "!"
    return answer
