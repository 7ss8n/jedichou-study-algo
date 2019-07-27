def check1(x, y, z):
    part1 = pow(x,2) + pow(y,2) + pow(z,2)
    part2 = x*y + x*z + y*z
    result = 2 * (part1 - part2)
    return (result == 26)

def check2(x, y, z):
    return (x*y*z < 2011)

def getD2Sum(x, y, z):
    p1 = pow((x-y),2)
    p2 = pow((x-z),2)
    p3 = pow((y-z),2)
    return p1 + p2 + p3

if __name__ == "__main__":
    val = range(1, 100)
    xlist, ylist, zlist = val, val, val
    nums = []
    for x in xlist:
        for y in ylist:
            for z in zlist:
                if check1(x,y,z) and check2(x,y,z) and (x <= y) and ( y <= z) :
                    nums.append((x,y,z))
    
    for x, y, z in nums:
        print "%d %d %d" % (x, y, z)
    print len(nums)
