class ListNode:
    def __init__(self, data):
        self.data = data
        self.next = None

def iterateSingleList(node):
    print(node.data)
    if node.next is not None:
        iterateSingleList(node.next)

if __name__ == "__main__":

    # Define node.
    n1 = ListNode(78)
    n2 = ListNode(83)
    n3 = ListNode(6)
    n4 = ListNode(73)
    n5 = ListNode(68)

    # Create linked list.
    n1.next = n2
    n2.next = n3
    n3.next = n4
    n4.next = n5

    # Iterate single linked list.
    iterateSingleList(n1)
