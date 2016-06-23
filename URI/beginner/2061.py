#!/usr/bin/python3
# -*- coding: utf-8 -*-

n, m = (int(x) for x in input("").split())
for i in range(m):
    n = n + 1 if input("") == "fechou" else n - 1
print(n)
