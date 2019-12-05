#!/bin/python
# -*- coding: utf8 -*-

# define
str = "5151555132151546"
strDict = {}

# process
for elt in str:
    if elt in strDict.keys():
        strDict[elt] += 1
    else:
        strDict[elt] = 1

# output
for key in strDict.keys():
    print "%s -> %d " % (key, strDict[key])
