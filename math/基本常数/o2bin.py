def oper_div_vals(nums):
    """用余数法计算整数二进制数, 这是基本迭代过程的原理"""
    quo = int(nums / 2)
    mod = int(nums % 2)
    return (quo, mod)

def dec2bin(m):
    """用余数法计算整数二进制数"""
    n, bins, q = m, [], (1,1)
    while (q[0] != 0):
        q = (int(n/2), int(n%2))
        n = q[0]
        bins.append(str(q[1]))
    # 增加0b前缀
    return "0b" + "".join(bins[::-1])

if __name__ == "__main__":
    """用余数发计算整数的二进制数,并保持和python的基本库一致"""
    for nums in range(0, 20):
        jdec = dec2bin(nums)
        sbin = bin(nums)
        comp = jdec == sbin
        print(jdec, sbin, comp)
