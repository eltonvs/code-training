#!/usr/bin/python3
# -*- coding: utf-8 -*-

even, odd = [], []

for c in range(15):
    n = int(input(""))
    if n%2 == 0:
        even.append(n)
    else:
        odd.append(n)

    if len(odd) == 5 or c == 14:
        for i in range(len(odd)):
            print("imeven[%i] = %i" %(i, odd[i]))
        odd = []
    if len(even) == 5 or c == 14:
        for i in range(len(even)):
            print("par[%i] = %i" %(i, even[i]))
        even = []
