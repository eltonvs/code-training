#!/usr/bin/python3
# -*- coding: utf-8 -*-

p = a = g = d = 0

while p != 4:
    p = int(input(""))
    if p == 1:
        a += 1
    elif p == 2:
        g += 1
    elif p == 3:
        d += 1

print("MUITO OBRIGADO\nAlcool: %i\nGasolina: %i\nDiesel: %i" %(a, g, d))
