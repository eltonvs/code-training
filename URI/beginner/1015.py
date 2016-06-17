#!/usr/bin/python3
# -*- coding: utf-8 -*-

x1, y1 = (float(x) for x in input("").split())
x2, y2 = (float(x) for x in input("").split())

print("%.4f" %pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 1/2))
