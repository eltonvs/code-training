#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    p = [int(x) for x in input("").split()]

    if p[0] == p[1] == p[2] == p[3] == 0:
        break

    if p[0] == p[2] and p[1] == p[3]:
        print(0)
    dx, dy = abs(p[0] - p[2]), abs(p[1] - p[3])
    elif p[0] == p[2] or p[1] == p[3] or dx == dy:
        print(1)
    else:
        print(2)
