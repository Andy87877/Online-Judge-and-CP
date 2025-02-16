def main():
    times = int(input())

    min_index = 0
    min_money = 100000000000000

    flag = False

    for i in range(1,times+1):
        a,b = map(eval, input().split())

        money = a*b
        # print(money, min_money)

        if (money == min_money):
            flag = True

        if (money < min_money):
            min_money = money
            min_index = i
            flag = False

    if (flag):
        print("iwantshampoo")
    else:
        print(min_index)
        
main()