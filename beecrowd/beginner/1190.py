#!/usr/bin/python3
# -*- coding: utf-8 -*-

s, op = 0, input("")

for i in range(11, -1, -1):
    for j in range(11, -1, -1):
        n = float(input(""))
        if j < i and i < 11 - j and j < 5: s += n

print("%.1f" %(s if op == 'S' else s/30))
