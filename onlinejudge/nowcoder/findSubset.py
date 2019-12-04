def PowerSetsRecursive2(items):  
    # the power set of the empty set has one element, the empty set  
    result = [[]]
    for x in items:  
        result.extend([subset + [x] for subset in result])  
    return result   

if __name__ == "__main__":
    nums = [1,2,3]
    rlst = PowerSetsRecursive2(nums)
    print(rlst)
