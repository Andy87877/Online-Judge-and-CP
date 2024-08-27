def custom(num):
    tmp = num*10**8
    last_di = int(tmp)%10

    if (last_di < 7):
        result = int(tmp)//10
    else:
        result =  int(tmp)//10+1
    return result/10**7

m,v,R = map(float, input().split())

ans = m*v*v/R

print("%.7f"%(custom(ans)))