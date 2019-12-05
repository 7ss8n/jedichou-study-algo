# Python Algorithms
# P33 - we could represent that tree lists of lists, like this

"""
            T
   /        |         \
 ( )       ( )        ( )
 / \        |         / \
a   b       c        d  ( )
                        / \
                       e   f
"""

T = [["a","b"],["c"],["d",["e","f"]]]  # use list to map tree nodes
print T[0][1]
print T[2][1][0]
