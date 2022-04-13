#!/usr/bin/python3
# -*- coding: utf-8 -*-

s, t, c = 0, 1, 0

while t <= 39:
    s, t, c = s + t/pow(2, c), t + 2, c + 1

print("%.2f" %s)
