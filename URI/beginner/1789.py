#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    try:
        n, v = int(input("")), sorted([int(x) for x in input("").split()])
    except EOFError:
        break
    print(1 if v[n - 1] < 10 else 2 if v[n - 1] < 20 else 3)
