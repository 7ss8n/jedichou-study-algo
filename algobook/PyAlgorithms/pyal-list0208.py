# Pyton Algorithms
# Mastering algorithms with Python languages
# P34 - Listing 2-8. A multiway tree class

class Tree:
    def __init__(self, kids, next=None):
        self.kids = self.val = kids
        self.next = next

t = Tree(Tree("a", Tree("b", Tree("c", Tree("d")))))
print t.kids.next.next.val