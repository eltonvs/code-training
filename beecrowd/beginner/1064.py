#!/usr/bin/python3
# -*- coding: utf-8 -*-

np, m = 0, 0
for i in range(6):
    a = float(input(""))
    if a > 0:
        np, m = np + 1, m + a
print("%i valores positivos\n%.1f" %(np, m/np))
