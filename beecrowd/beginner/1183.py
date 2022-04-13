#!/usr/bin/python3
# -*- coding: utf-8 -*-

m, op, s = [], input(""), 0

for i in range(144):
    m.append(float(input("")))

for i in range(12):
    for k in range((i + 1) + 12 * i, 12 * (i + 1)):
        s += m[k]

print("%.1f" %(s if op == 'S' else s/66))
