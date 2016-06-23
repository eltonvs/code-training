#!/usr/bin/python3
# -*- coding: utf-8 -*-

table, v = {1001: 1.5, 1002: 2.5, 1003: 3.5, 1004: 4.5, 1005: 5.5}, 0
for i in range(int(input(""))):
    c, q = (int(x) for x in input("").split())
    v += table[c]*q
print("%.2f" %v)
