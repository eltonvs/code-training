#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    n, p = int(input("")), True
    if n < 2: p = False
    for i in range(2, int(pow(n, 1/2)) + 1):
        if n%i == 0: p = False
    print(n, "%seh primo" %("" if p else "nao "))
