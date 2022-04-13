#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    s, (ini, m) = 0, (int(x) for x in input("").split())
    for i in range(ini, ini + m*2):
        if i%2 != 0:
            s += i
    print(s)
