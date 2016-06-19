#!/usr/bin/python3
# -*- coding: utf-8 -*-

m, line, op, s = [], int(input("")), input(""), 0

for i in range(144):
    m.append(float(input("")))

for i in range(12):
    s += m[col + 12*i]

print("%.1f" %(s if op == 'S' else s/12))
