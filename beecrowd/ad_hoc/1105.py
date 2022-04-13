#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    b, n = (int(x) for x in input("").split())

    if b == n == 0:
        break

    saldo, s = [int(x) for x in input("").split()], True

    for i in range(n):
        a, b, c = (int(x) for x in input("").split())
        saldo[a-1], saldo[b-1] = saldo[a-1] - c, saldo[b-1] + c

    for i in saldo:
        if i < 0:
            s = False
            break

    print("S" if s else "N")
