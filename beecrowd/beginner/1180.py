#!/usr/bin/python3
# -*- coding: utf-8 -*-

n, l = int(input("")), [int(x) for x in input("").split()]

small, pos = l[0], 0

for i in range(n):
    if l[i] < small:
        small, pos = l[i], i

print("Menor valor: %i\nPosicao: %i" %(small, pos))
