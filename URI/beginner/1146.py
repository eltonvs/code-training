#!/usr/bin/python3
# -*- coding: utf-8 -*-

n = 1
while n != 0:
    n = int(input(""))
    for i in range(1, n + 1):
        if i == n:
            print("%i" %i)
        else:
            print("%i " %i, end="")
