# Python Algorithms
# Mastering Basic Algorithms in the Python language
# P34
# Listing 2-7. A binary Tree class

class Tree:
    def __init__(self, left, right):
        self.left = left
        self.right = right

t = Tree(Tree("a", "b"), Tree("c", "d"))
print t.right.left
