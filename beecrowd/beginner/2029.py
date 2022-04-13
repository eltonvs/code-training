#!/usr/bin/python3
# -*- coding: utf-8 -*-
while True:
    try:
        v, d = float(input("")), float(input(""))
    except EOFError:
        break
    a = 3.14*(d/2)**2
    print("ALTURA = %.2f\nAREA = %.2f" %(v/a, a))
