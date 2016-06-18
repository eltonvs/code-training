#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    l, s = sorted([int(x) for x in input("").split()]), 0

    for i in range(l[0] + 1, l[1]):
        if i%2 != 0:
            s += i

    print(s)
