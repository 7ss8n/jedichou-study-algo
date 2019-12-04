import sys
while True:
    try:
        exp = sys.stdin.readline().strip()
        num = eval(exp)
        print(num)
    except:
        break