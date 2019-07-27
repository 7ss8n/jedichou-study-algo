if __name__ == "__main__":

    # bit operation
    userInput = input().strip()
    intArr = [int(x) for x in userInput]
    print(intArr)

    bit = [0, 1]
    size = len(intArr)

    subset = [
        [x, y, z]
        for x in bit
        for y in bit
        for z in bit
    ]

    print(subset)


