# 题目描述
# 令Pi表示第i个素数。现任给两个正整数M <= N <= 10000，请输出PM到PN的所有素数。

# 输入描述:
# 输入在一行中给出M和N，其间以空格分隔。


# 输出描述:
# 输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。

# 输入例子:
# 5 27

# 输出例子:
# 11 13 17 19 23 29 31 37 41 43
# 47 53 59 61 67 71 73 79 83 89
# 97 101 103


def Prime(n):
    if n <= 1: return False
    if n == 2: return True
    if n > 2:
        div = range(2, n)
        for d in div:
            if n % d == 0:
                return False
        return True

def concat(s):
    return " ".join([str(x) for x in s])

if __name__ == "__main__":
    primes = []
    param = list(map(int, input().split()))
    pFrom, pEnd = param[0], param[1]
    n = 1
    while True:
        try:
            if Prime(n): 
                primes.append(n)
            n = n + 1
            if len(primes) == pEnd:
                break
        except:
            pass

    target = primes[pFrom - 1:]
    ltgt = len(target)
    for idx in range(ltgt):
        if (idx+1) % 10 == 0:
            print(concat(target[idx-9:idx]))
        elif (idx+1) == ltgt:
            last_s = (ltgt // 10) * 10 - 1
            print(concat(target[last_s:]))