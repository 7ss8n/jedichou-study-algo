class ListNode:
    def __init__(self, data):
        self.data = data
        self.next = None

if __name__ == "__main__":

    a = ListNode(11)
    b = ListNode(55)
    c = ListNode(38)

    # a is single link list
    a.next = b
    b.next = c

    # manual output ListNode data.
    print(a.data)
    print(a.next.data)
    print(a.next.next.data)
