#!/usr/bin/python3
# -*- coding: utf-8 -*-

c, (lim, n) = 1, (int(x) for x in input("").split())

for i in range(1, n + 1):
    if c == lim:
        print(i)
        c = 1
    else:
        print(i, end=" ")
        c += 1
