#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    d = [int(x) for x in input("").split()]
    print(0 if d[0] == d[1] == 0 else 26**d[0] * 10**d[1])
