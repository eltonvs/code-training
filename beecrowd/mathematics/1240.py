#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    n1, n2 = input("").split()
    dig = len(n2)
    print("encaixa" if n1[-dig:] == n2 else "nao encaixa")
