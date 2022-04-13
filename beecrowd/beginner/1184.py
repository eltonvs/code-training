#!/usr/bin/python3
# -*- coding: utf-8 -*-

m, op, s = [], input(""), 0

for i in range(144):
    m.append(float(input("")))

for i in range(12):
    for j in range(i*12, i*12 + i):
        s += m[j]

print("%.1f" %(s if op == 'S' else s/66))
