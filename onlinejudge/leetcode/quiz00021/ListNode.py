
import unittest

class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class SinglyLinkedList(unittest.TestCase):
    def test_AssertCheck(self):
        self.assertEqual(1,1)
        self.assertEqual("Jedi", "Jedi")

    def test_SimpleListNodeCheck(self):
        slinkedlist = ListNode(2)
        self.assertEqual(slinkedlist.val, 2)
        self.assertEqual(slinkedlist.next, None)

    def test_ManualSingleLinkedListTwoElements(self):
        n1 = ListNode("a")
        n2 = ListNode("b")
        n1.next = n2
        self.assertEqual(n1.next, n2)
        self.assertEqual(n2.next, None)
    
    def test_ManualSingledLinkedListThreeElements(self):
        a = ListNode('a')
        a.next = ListNode('b')
        a.next.next = ListNode('c')
        self.assertEqual(a.val, 'a')
        self.assertEqual(a.next.val, 'b')
        self.assertEqual(a.next.next.val, 'c')

    def test_CreateAnIntSingleLinkedList(self):
        vals = range(1,10)

if __name__ == "__main__":
    unittest.main()
