class ListNode:
    def __init__(self, data):
        self.data = data

if __name__ == "__main__":
    a, b, c, = ListNode(11), ListNode(52), ListNode(18)
    nodes = [a, b, c]
    for node in nodes:
        print(node.data)