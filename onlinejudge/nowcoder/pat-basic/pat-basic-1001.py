size = int(input().strip())
tcs = []

for idx in range(size):
    tmp = input().strip().split(' ')
    tc = [int(x) for x in tmp]
    tcs.append(tc)

for idx in range(size):
    a, b, c = tcs[idx]
    if (a+b) > c:
        print("Case #%d: true" % (idx+1))
    else:
        print("Case #%d: false" % (idx+1))