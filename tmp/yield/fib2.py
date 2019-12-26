# coding: utf-8

def fab2(max):
    n, a, b = 0, 0, 1
    L = []
    while n < max:
        L.append(b)
        a, b = b, a + b
        n = n + 1
    return L

if __name__ == '__main__':
    r = fab2(20)
    for elt in r:
        print(elt)
