# File: PyAlgo-Page4.py
# Date: 2020.2.27 20:55
# Author: Jedi Chou, jedigit@163.com
# Description: Two ways to create an integer list.
#   You can compare performance between these method.
#
# Reference: Python Algorithms, Magnus Lie Hetland
# Reference: Master Python High performance, Fernando Doglio

import timeit

def GetRandInts_First(size):
    """Normal way"""
    nums = []
    for i in range(size):
        nums.append(i)
    nums.reverse()
    return nums

def GetRandInts_Second(size):
    """Smart way"""
    nums = []
    for i in range(size):
        nums.insert(0, i)
    return nums

if __name__ == "__main__":

    # Define variables
    size = 10
    frt = GetRandInts_First(size)
    snd = GetRandInts_Second(size)

    # Output compare result
    print("First integer list :", frt)
    print("Second integer list:", snd)
    
    # Calculate and output execute time
    frt_timeit = timeit.timeit("GetRandInts_First(10)", setup="from __main__ import GetRandInts_First")
    snd_timeit = timeit.timeit("GetRandInts_Second(10)", setup="from __main__ import GetRandInts_Second")
    print("1st solution time: ", frt_timeit)
    print("2nd solution time: ", snd_timeit)

    #########
    # Output at my computer
    # D:\>python PyAlgo-Page4.py
    # First integer list : [99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89,
    # , 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59,
    # , 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29,
    # , 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0]
    # Second integer list: [99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89,
    # , 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59,
    # , 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29,
    # , 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0]
    # 1st solution time:  14.747632522
    # 2nd solution time:  29.295030538000002
    #########
    # Notice: Why second method slower than first method?
    #########
