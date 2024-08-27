s = input()
flag = True
for i in range(int(len(s)/2)+1):
    if (s[i] != s[(i*-1)-1]):
        flag = False
        break
if flag:
    print("yes")
else:
    print("no")