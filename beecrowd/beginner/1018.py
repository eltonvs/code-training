#!/usr/bin/python3
# -*- coding: utf-8 -*-

n, ced = int(input("")), [100, 50, 20, 10, 5, 2, 1]

print(n)
for c in ced:
    print(int(n/c), "nota(s) de R$", ("%.2f" %c).replace('.', ','))
    n %= c
