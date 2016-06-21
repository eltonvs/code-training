#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    l = []
    for j in range(int(input(""))):
        l.append(input(""))
    c = l[0]
    for j in range(len(l) - 1):
        if l[j] != l[j+1]:
            c = "ingles"
            break
    print(c)
