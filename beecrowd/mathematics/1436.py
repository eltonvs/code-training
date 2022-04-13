#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    v = [int(x) for x in input("").split()]
    n, v[0] = v[0], 0
    v.sort()
    print("Case %i: %i" %(i+1, v[int(n/2) + 1]))
