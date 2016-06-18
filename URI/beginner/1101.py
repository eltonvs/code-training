#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    l, s = sorted([int(x) for x in input("").split()]), 0

    if l[0] == 0 or l[1] == 0:
        break

    for i in range(l[0], l[1] + 1):
        s += i
        if i == l[1]:
            print("%i Sum=%i" %(i, s))
        else:
            print(i, end=" ")
