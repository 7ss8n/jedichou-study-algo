# Python Algorithms
# Mastering Basic Algorithms in the Python language
# Listing 2-4. A dict with Adjacency Sets

N = {
    'a': set('bcdef'),
    'b': set('ce'),
    'c': set('d'),
    'd': set('e'),
    'e': set('f'),
    'f': set('cgh'),
    'g': set('fh'),
    'h': set('fg')
}

print 'b' in N['a']
print len(N['f'])
