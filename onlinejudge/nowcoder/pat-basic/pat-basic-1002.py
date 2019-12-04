# 给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：
# A1 = 能被5整除的数字中所有偶数的和；
# A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
# A3 = 被5除后余2的数字的个数；
# A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
# A5 = 被5除后余4的数字中最大数字。

def A1(nums):
    lst = [n for n in nums if n % 5 == 0 and n % 2 == 0]
    if len(lst) == 0:
        return 'N'
    else:
        return sum(lst)

def A2(nums):
    lst = [n for n in nums if n % 5 == 1]
    if len(lst) == 0:
        return 'N'
    else:
        adds, subs = lst[::2], lst[1:][::2]
        return sum(adds) - sum(subs)

def A3(nums):
    lst = [n for n in nums if n % 5 == 2]
    if len(lst) == 0:
        return 'N'
    else:
        return len(lst)

def A4(nums):
    lst = [n for n in nums if n % 5 == 3]
    if len(lst) == 0:
        return 'N'
    else:
        return "{0:.1f}".format(sum(lst) / len(lst))

def A5(nums):
    lst = [n for n in nums if n % 5 == 4]
    if len(lst) == 0:
        return 'N'
    else:
        return max(lst)

if __name__ == "__main__":
    nums = list(map(int, input().split()))[1:]
    a1, a2, a3, a4, a5 = A1(nums), A2(nums), A3(nums), A4(nums), A5(nums)
    print(a1, a2, a3, a4, a5)