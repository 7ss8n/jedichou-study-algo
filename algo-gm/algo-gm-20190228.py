# There has a set, we call a[n], it contain some elements.
# And element is 2, 22, 222, 2222, ....
# Give a number and get sum from a[0]...a[n].

c = int(input("input base character:"))
n = int(input("input n for a[n]:"))
aset = [c]
for idx in range(1, n):
    first_elt = aset[0]
    last_elt = aset[-1]
    aset.append(last_elt*10 + first_elt)
print(sum(aset))
