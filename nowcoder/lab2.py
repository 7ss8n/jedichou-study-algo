import sys
while True:
    try:
        n = int(sys.stdin.readline().strip())
        inputArr, outputArr = [], []
        for elt in range(n):
            num = int(sys.stdin.readline().strip())
            inputArr.append(num)
        for num in inputArr:
            if num not in outputArr:
                outputArr.append(num)
        outputArr.sort()
        for num in outputArr:
            print(num)
    except:
        break