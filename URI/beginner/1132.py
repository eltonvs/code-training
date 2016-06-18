#!/usr/bin/python3
# -*- coding: utf-8 -*-

l, s = sorted([int(input("")), int(input(""))]), 0

for i in range(l[0], l[1] + 1):
    if i%13 != 0: s += i

print(s)
