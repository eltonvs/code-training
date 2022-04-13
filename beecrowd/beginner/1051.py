#!/usr/bin/python3
# -*- coding: utf-8 -*-

v = float(input(""))

if v <= 2000:
    print("Isento")
else:
    if v <= 3000:
        i = (v - 2000) * 0.08
    elif v <= 4500:
        i = 1000 * 0.08 + (v - 3000) * 0.18
    else:
        i = 1000 * 0.08 + 1500 * 0.18 + (v - 4500) * 0.28
    print("R$ %.2f" %i)
