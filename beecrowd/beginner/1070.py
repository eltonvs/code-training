#!/usr/bin/python3
# -*- coding: utf-8 -*-

x = int(input(""))

if x%2 == 0:
    x += 1
for i in range(x, x + 12, 2):
    print(i)
