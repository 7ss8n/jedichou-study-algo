class Node(object):
    def __init__(self, item):
        self.item = item
        self.next = None

if __name__ == "__main__":

    # define some nodes
    first = Node("1st")
    second = Node("2nd")
    third = Node("3rd")

    # create relationship
    first.next = second
    second.next = third

    # show very item value of Nodes
    print(first.item)
    print(first.next.item)
    print(first.next.next.item)