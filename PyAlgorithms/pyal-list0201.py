# Listing 2-1. Straightforward Ajacency Set Representation

# define edges
a, b, c, d, e, f, g, h = range(8)

# define graphic
N = [
    {b, c, d, e, f},    # a
    {c, e},             # b
    {d},                # c
    {e},                # d
    {f},                # e
    {c, g, h},          # f
    {f, h},             # g
    {f, g}              # h
]

print N[a]          # first edge, it is mean b-c-d-e-f.
print b in N[a]     # it is mean first edge contains b point.
print len(N[f])     # it is mean how many points contained sixth edge?
