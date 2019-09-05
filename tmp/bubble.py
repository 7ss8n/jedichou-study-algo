arr = [8,7,6,5,4,3,2,1]
n = len(arr)
vpass = 1

while(vpass <= n-1):
    index = 0
    while (index <= n - vpass -1):
        if (arr[index]>arr[index+1]):
            arr[index], arr[index+1] = arr[index+1], arr[index]
        index = index + 1
    vpass = vpass + 1
    print(arr)

for item in arr:
    print(item)

