#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    try:
        h, m = (int(x) for x in input("").split(':'))
    except EOFError:
        break
    print("Atraso maximo: %i" %(m + 60*(h - 7) if h >= 7 else 0))
