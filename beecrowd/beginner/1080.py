#!/usr/bin/python3
# -*- coding: utf-8 -*-

b, p = 0, 0

for i in range(100):
    a = int(input(""))
    if a > b:
        b, p = a, i

print("%i\n%i" %(b, p + 1))
