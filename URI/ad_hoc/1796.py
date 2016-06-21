#!/usr/bin/python3
# -*- coding: utf-8 -*-

n, l, c, i = int(input("")), sorted([int(x) for x in input("").split()]), 0, 0
while l[i] != 1:
    c, i = c + 1, i + 1
print("Y" if c > int(n/2) else "N")
