#!/usr/bin/python3
# -*- coding: utf-8 -*-

f = lambda n: 1 if n == 0 or n == 1 else n*f(n - 1)

while True:
    try:
        n = [int(x) for x in input("").split()]
        print(f(n[0]) + f(n[1]))
    except EOFError:
        break
