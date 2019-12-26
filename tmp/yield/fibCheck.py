# coding: utf-8

from inspect import isgeneratorfunction
import types

def fab(max):
    n, a, b = 0, 0, 1
    while n < max:
        yield b
        a, b = b, a + b
        n = n + 1

if __name__ == '__main__':
    print(isgeneratorfunction(fab))
    print(isinstance(fab, types.GeneratorType))
    print(isinstance(fab(5), types.GeneratorType))
