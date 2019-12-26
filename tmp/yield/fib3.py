# coding: utf-8

class Fab(object):

    def __init__(self, max):
        self.max = max
        self.n = 0
        self.a = 0
        self.b = 1

    def __iter__(self):
        return self

    def next(self):
        if self.n < self.max:
            r = self.b
            self.a, self.b = self.b, self.a + self.b
            self.n = self.n + 1
            return r
        raise StopIteration()

if __name__ == '__main__':

    # Create a Fab instance.
    fibObj = Fab(5)

    # Use next method to get next number.
    print(fibObj.next())
    print(fibObj.next())
    print(fibObj.next())
    print(fibObj.next())
    print(fibObj.next())

    # Will get an exception.
    print(fibObj.next())
