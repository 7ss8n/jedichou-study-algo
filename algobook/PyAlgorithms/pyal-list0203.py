# Python Algorithms
# Mastering Basic Algorithms in the Python language
# Listing 2-3. Adjacency dicts with Edge Weights

a, b, c, d, e, f, g, h = range(8)

N = [
    {b:2, c:1, d:3, e:9, f:4},  # a
    {c:4, e:3},                 # b
    {d:8},                      # c
    {e:7},                      # d
    {f:5},                      # e
    {c:2, g:2, h:2},            # f
    {f:1, h:6},                 # g
    {f:9, g:8}                  # h
]

print b in N[a]     # Neighborhood membership
print len(N[f])     # Degree
print N[a][b]       # Edge weight for (a, b)
