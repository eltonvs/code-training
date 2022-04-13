#!/usr/bin/python3
# -*- coding: utf-8 -*-

nv, media = 0, 0

while nv < 2:
    n = float(input(""))
    if n > 10 or n < 0:
        print("nota invalida")
        continue
    nv, media = nv + 1, media + n

print("media = %.2f" %(media/2))
