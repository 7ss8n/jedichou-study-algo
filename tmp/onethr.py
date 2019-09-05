#!/usr/bin/evn python

from time import sleep, ctime

def loop0():
    print("start loop 0 at:", ctime())
    sleep(4)

def main():
    print("hello world")
    loop0()

if __name__ == "__main__":
    main()
