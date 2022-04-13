#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    try:
        n = int(''.join(str(x) for x in input("").split()))
        if n == 0 or n == 111: print("*")
        elif n == 100 or n == 11: print("A")
        elif n == 10 or n == 101: print("B")
        elif n == 1 or n == 110: print("C")
    except EOFError:
        break
