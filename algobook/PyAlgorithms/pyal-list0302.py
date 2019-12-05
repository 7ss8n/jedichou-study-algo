# Python Algorithms
# Mastering basic algorithms in python language
# P65 - Listing 3-2. Merge Sort, Another Example Sorting Algorithm

def mergesort(seq):
    mid = len(seq)//2
    lft, rgt = seq[:mid], seq[mid:]
    if len(lft) > 1: lft = mergesort(lft)
    if len(rgt) > 1: rgt = mergesort(rgt)
    res = []
    while lft and rgt:
        if lft[-1] >= rgt[-1]:
            res.append(lft.pop())
        else:
            res.append(rgt.pop())
    res.reverse()
    print (lft or rgt) + res
    return (lft or rgt) + res

t = mergesort([5,4,3,3,6,7,3,2,1])
print t
