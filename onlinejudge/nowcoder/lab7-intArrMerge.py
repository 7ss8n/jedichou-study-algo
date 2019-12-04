while True:
    try:       
        _, in1 = input(), list(map(int, input().split()))
        _, in2 = input(), list(map(int, input().split()))
        print("".join(map(str,list(set(in1+in2)).sort())))
    except:
        break