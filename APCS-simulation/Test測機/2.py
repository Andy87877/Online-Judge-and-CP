a = list(input())
for i in range(len(a)):
    if (a[i] == "入"):
        a[i] = "出"
    print(a[i],end="")
