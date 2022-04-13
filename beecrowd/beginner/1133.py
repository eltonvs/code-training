#!/usr/bin/python3
# -*- coding: utf-8 -*-

l = sorted([int(input("")), int(input(""))])

for i in range(l[0] + 1, l[1]):
    if i%5 == 2 or i%5 == 3: print(i)
