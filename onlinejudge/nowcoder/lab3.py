import sys
import re

def format(string):
    n = len(string)
    if n == 0:
        pass
    elif n < 8:
        last = '0' * (8-n)
        print(string+last)
    else:
        if n % 8 == 0:
            lst = re.findall(r'.{8}', string)
            for elt in lst:
                print(elt)
        else:
            arr = re.findall(r'.{8}', string)
            m = int(n / 8)
            y = n % 8
            lstIndex = (m * 8 - 1)
            lst = string[lstIndex+1:] + '0'*(8-y)
            arr.append(lst)
            for elt in arr:
                print(elt)


s1 = sys.stdin.readline().strip()
s2 = sys.stdin.readline().strip()

format(s1)
format(s2)
