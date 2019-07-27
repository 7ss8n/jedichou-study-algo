s = input()
arr = s.split(' ')[0].lower()
tgt = s.split(' ')[1][0].lower()
n = 0

for elt in arr:
    if (elt == tgt):
        n += 1

print(n)
