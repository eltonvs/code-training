#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    soma, n = 0, int(input(""))
    for i in range(1, n):
        if n%i == 0:
            soma += i
    print("%i%s eh perfeito" %(n, "" if soma == n else " nao"))
