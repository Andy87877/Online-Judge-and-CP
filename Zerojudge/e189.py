try:
    while(1):
        n = eval(input())
        if (n%3 == 0):
            print("YES")
        else:
            print("NO")
except EOFError:
    pass