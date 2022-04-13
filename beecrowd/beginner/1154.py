#!/usr/bin/python3
# -*- coding: utf-8 -*-

n = m = c = 0

while n >= 0:
    n = int(input(""))
    if n > 0:
        c, m = c + 1, m + n

print("%.2f" %(m/c))
