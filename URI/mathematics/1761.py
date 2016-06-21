#!/usr/bin/python3
# -*- coding: utf-8 -*-

from math import tan

while True:
    try:
        n = [float(x) for x in input("").split()]
    except EOFError:
        break
    print("%.2f" %((n[1] * tan(n[0] * 3.141592654 / 180.0) + n[2]) * 5))
