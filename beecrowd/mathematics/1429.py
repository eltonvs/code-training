#!/usr/bin/python3
# -*- coding: utf-8 -*-

fat = [1, 2, 6, 24, 120]
while True:
    n, s, i = int(input("")), 0, 0
    if n == 0: break
    while n > 0:
        s, n, i = s + (n%10)*fat[i], int(n/10), i + 1
    print(s)
