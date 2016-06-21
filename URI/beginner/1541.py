#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    n = [int(x) for x in input("").split()]
    if n[0] == 0: break
    ae, i = n[0] * n[1], 0
    while i*i*n[2]/100 <= ae: i += 1
    print(i - 1)
