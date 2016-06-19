#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    try:
        n = [int(x) for x in input("").split()]
        print(abs(n[1] - n[0]))
    except EOFError:
        break
