#!/usr/bin/python3
# -*- coding: utf-8 -*-

r, c, n = 1, 0, [0, 0]
while r != 2:
    while c < 2:
        n[c] = float(input(""))
        if 0 <= n[c] <= 10:
            c += 1
        else:
            print("nota invalida")
    print("media = %.2f" %((n[0] + n[1])/2))
    while c != 0:
        print("novo calculo (1-sim 2-nao)")
        r = int(input(""))
        if r == 1 or r == 2:
            c = 0
