class ListNode:
    def __init__(self, data):
        self.data = data
        self.next = None

def traversal(head):
    '''iterate single linked list'''
    curNode = head
    while curNode is not None:
        print(curNode.data)
        curNode = curNode.next

if __name__ == "__main__":
    a = ListNode( 11 )
    b = ListNode( 52 )
    c = ListNode( 18 )
    a.next = b
    b.next = c
    traversal(a)
