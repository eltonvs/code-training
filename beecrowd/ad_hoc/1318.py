#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    c, r = 0, []
    b = [int(x) for x in input("").split()]
    if b[0] == 0 and b[1] == 0: break
    num = sorted([int(x) for x in input("").split()])
    for i in range(1, b[1]):
        if num[i] == num[i-1] and num[i] not in r:
            c += 1
            r.append(num[i])
    print(c)
