class Printer:
    def arrayPrint(self, arr, n):
        if n <= 1:
            return [arr[0]]
        else:
            line = list(range(1, 2*n))
            size = list(range(1, n)) + list(range(n, 0, -1))
            lineNum, r = list(zip(line, size)), []
            
            for diagonal in lineNum:
                lineId, lineSize = diagonal[0], diagonal[1]
                row, col = 0, 0

                # calculate row and index
                if lineId <= n:
                    row, col = 0, n - lineId
                else:
                    row, col = lineId - n, 0

                # output
                # print("line:", lineId)
                for idx in range(1, lineSize + 1):
                    # print(row, col)
                    r.append(arr[row][col])
                    row = row + 1
                    col = col + 1

            return r

if __name__ == "__main__":

    mat = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
    num = 4
    printer = Printer()
    matchck = printer.arrayPrint(mat, num)
    expect = [4,3,8,2,7,12,1,6,11,16,5,10,15,9,14,13]

    print(matchck)
    print(matchck == expect)