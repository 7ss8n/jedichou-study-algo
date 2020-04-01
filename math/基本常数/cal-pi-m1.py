import math

def math_pi(n):
    """计算Pi的第一种方法"""
    numInCircle = 0
    sums = 0
    pi = 0
    for i in range(1, n+1):
        sums += 1.0/(i*i)
    pi = math.sqrt(sums * 6)
    return pi

def math_pi2(n):
    """计算Pi的第二种方法"""
    sums = 0
    for idx in range(1, n+1):
        sums += 1/pow(idx,2)
    return math.sqrt(sums*6)

if __name__ == "__main__":

    # TODO: 还有很多计算Pi的方法未实现
    # TODO: math_pi, math_pi2的精度都不高

    n = 200000
    cal_pi = math_pi(1000)
    # print(cal_pi, math.pi)
    print(math_pi2(20000000), math.pi, math.pi-math_pi2(200000))
