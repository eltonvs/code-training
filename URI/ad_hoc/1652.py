#!/usr/bin/python3
# -*- coding: utf-8 -*-

e, vog, t, u = [], "aeiou", "osx", "cs"
n = [int(x) for x in input("").split()]
for i in range(n[0]):
    j = input("").split()
    e.append(j[0])
    e.append(j[1])
for i in range(n[1]):
    j = input("")
    if j in e:
        print(e[e.index(j) + 1])
    else:
        if j[-1] == "y" and j[-2] not in vog:
            print(j[0:len(j)-1] + "ies")
        elif j[-1] in t or j[-1] == "h" and j[-2] in u:
            print(j + "es")
        else:
            print(j + "s")
