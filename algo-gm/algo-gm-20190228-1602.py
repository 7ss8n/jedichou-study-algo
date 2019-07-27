# There has a set, we call a[n], it contain some elements.
# And element is 
#  1
#  12
#  123
#  1234
#  12345
#  123456
#  1234567
#  12345678
#  123456789
#  12345678910
#  1234567891011
# So, we want get that sum.

n = int(input("n:"))
restr, elts = "", []
for i in range(1, n+1):
    restr += str(i)
restr = int(restr)
print(restr)
