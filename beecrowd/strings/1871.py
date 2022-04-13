#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    n = [int(x) for x in input("").split()]
    if n[0] == n[1] == 0: break
    soma = str(n[0] + n[1])
    for i in range(len(soma)):
        if soma[i] != '0': print(soma[i], end="")
    print()
