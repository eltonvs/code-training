#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    n = int(input(""))
    if n == 0: break
    l = [int(x) for x in input("").split()]
    m1 = m2 = p1 = p2 = 0
    for i in range(n):
        if l[i] > m1:
            m2, p2, m1, p1 = m1, p1, l[i], i
        elif l[i] > m2:
            m2, p2 = l[i], i
    print(p2 + 1)
