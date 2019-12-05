# -*- coding: utf-8 -*-
# File: bagtest1.py
# From: Data Structures and Algorithms Using Python.pdf, page 16

# Jedi: It is mean from file import class name.
from linearbag import Bag

myBag = Bag()
myBag.add(19)
myBag.add(74)
myBag.add(23)
myBag.add(23)
myBag.add(19)
myBag.add(12)

value = int(input("Guess a value contained in the bag. "))
if value in myBag:
	print "The bag contains the value", value
else:
	print "The bag does not contain the value", value
