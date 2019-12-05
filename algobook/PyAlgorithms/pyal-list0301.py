# Python Algorithms
# Mastering algorithms with Python language
# P65 - Listing 3-1. Gnome Sort, An Example Sorting Algorithm

def gnomesort(seq):
    i = 0
    while i < len(seq):
        if i == 0 or seq[i-1] <= seq[i]:
            i += 1
        else:
            seq[i], seq[i-1] = seq[i-1], seq[i]
            i -= 1
        print seq # print 

t = [5,4,2,2,1]
gnomesort(t)
print t
