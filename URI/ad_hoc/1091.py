#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    n = int(input(""))

    if n == 0:
        break

    div = [int(x) for x in input("").split()]
    for i in range(n):
        g = [int(x) for x in input("").split()]
        if g[0] > div[0] and g[1] > div[1]:
            print("NE")
        elif g[0] < div[0] and g[1] > div[1]:
            print("NO")
        elif g[0] > div[0] and g[1] < div[1]:
            print("SE")
        elif g[0] < div[0] and g[1] < div[1]:
            print("SO")
        else:
            print("divisa")
