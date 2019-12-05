# -*- coding:utf-8 -*-

#####################################################################
# 题目描述
# 对于一个矩阵，请设计一个算法，将元素按“之”字形打印。具体见样例。
#
# 给定一个整数矩阵mat，以及他的维数nxm，请返回一个数组，其中元素依次为打印的数字。
#
# 测试样例：
# [[1,2,3],[4,5,6],[7,8,9],[10,11,12]],4,3
# 返回：[1,2,3,6,5,4,7,8,9,12,11,10]
#####################################################################

class Printer:
    def printMatrix(self, mat, n, m):
        pmat = []
        for idx in range(n):
            if (idx+1) % 2 == 0:
                pmat = pmat + mat[idx][::-1]
            else:
                pmat = pmat + mat[idx]
        return pmat

if __name__ == "__main__":

    # define
    mat = [[1,2,3],[4,5,6],[7,8,9],[10,11,12]]
    row, col = 4, 3
    printer = Printer()
    result = printer.printMatrix(mat, row, col)
    
    # output
    print(result)
