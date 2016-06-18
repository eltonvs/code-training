#!/usr/bin/python3
# -*- coding: utf-8 -*-

a, b, c = (float(x) for x in input("").split())

if (abs(b - c) < a and a < b + c and abs(a - c) < b and b < a + c
    and abs(a - b) < c and c < a + b):
    print("Perimetro = %.1f" %(a + b + c))
else:
    print("Area = %.1f" %((a + b)/2 * c))
