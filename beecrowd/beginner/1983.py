#!/usr/bin/python3
# -*- coding: utf-8 -*-

b_m = b_n = 0
for i in range(int(input(""))):
    m, n = input("").split()
    m, n = int(m), float(n)
    if n >= 8 and n > b_n:
        b_m, b_n = m, n
print("Minimum note not reached" if b_m == 0 else b_m)
