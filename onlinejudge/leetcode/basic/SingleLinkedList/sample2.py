class ListNode:
    def __init__(self, data):
        self.data = data
        self.next = None

if __name__ == "__main__":
    a = ListNode( 11 )
    b = ListNode( 52 )
    c = ListNode( 18 )
    a.next = b
    b.next = c
    
    print(a.data)
    print(a.next.data)
    print(a.next.next.data)