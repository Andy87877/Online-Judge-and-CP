n = int(input())
arr = [0,0,0]
for i in range(n):
    num = int(input())
    arr[num%3] += 1
print(arr[0], arr[1], arr[2])