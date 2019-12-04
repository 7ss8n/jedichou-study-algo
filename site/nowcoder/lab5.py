import sys

def prime(num):
    if num == 1: return False
    if num == 2: return True
    for n in [x for x in range(2, num)]:
        if num % n == 0:
            return False
    return True

def primeList(num):
    prilist = []
    for n in [x for x in range(2, num)]:
        if prime(n):
            prilist.append(n)
    return prilist

def getResult(num):
    # prilist, tgt, lst = primeList(num), num, []
    return ""

num = int(sys.stdin.readline().strip())
print(getResult(num))

## TODO: no mind