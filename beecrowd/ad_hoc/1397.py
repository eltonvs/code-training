#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    a, b, n = 0, 0, int(input(""))
    if n == 0: break
    for i in range(n):
        g = [int(x) for x in input("").split()]
        if g[0] >  g[1]: a += 1
        elif g[1] > g[0]: b += 1
    print(a, b)
