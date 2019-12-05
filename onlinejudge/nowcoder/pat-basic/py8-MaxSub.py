# -*- coding:utf-8 -*-

class MaxDivision:
    def findMaxDivision(self, A, n):
        if n == 2:
            a = sorted(A)
            return a[1] - a[0]
        
        if n > 2 and n <= 500:
            a = sorted(A)
            b = sorted([abs(a[i]-a[i+1]) for i in range(n-1)])
            return b[-1]
        
        pass

if __name__ == "__main__":

    # define
    in1 = [208,254,473,153,389,579,398]
    n = 7
    maxdiv = MaxDivision()

    # output
    print(maxdiv.findMaxDivision(in1, n))