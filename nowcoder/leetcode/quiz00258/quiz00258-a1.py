import unittest

class Solution:
    def addDigits(self, num: int) -> int:
        if num < 10: return num
        return self.addDigits(sum([int(d) for d in str(num)]))


class Quiz00258(unittest.TestCase):
    def test_Less10(self):
        answer = Solution()
        self.assertEqual(answer.addDigits(1), 1)
        self.assertEqual(answer.addDigits(2), 2)
        self.assertEqual(answer.addDigits(3), 3)
        self.assertEqual(answer.addDigits(4), 4)
        self.assertEqual(answer.addDigits(5), 5)
        self.assertEqual(answer.addDigits(6), 6)
        self.assertEqual(answer.addDigits(7), 7)
        self.assertEqual(answer.addDigits(8), 8)
        self.assertEqual(answer.addDigits(9), 9)

    def test_Less20AndGreatThan20(self):
        answer = Solution()
        self.assertEqual(answer.addDigits(10), 1)

    def test_LeetcodeSample(self):
        answer = Solution()
        self.assertEqual(answer.addDigits(38), 2)
        self.assertEqual(answer.addDigits(39), 3)
        self.assertEqual(answer.addDigits(123), 6)

if __name__ == "__main__":
    unittest.main()