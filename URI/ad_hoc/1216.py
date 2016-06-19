#!/usr/bin/python3
# -*- coding: utf-8 -*-

s, c = 0, 0
while True:
    try:
        input("")
        s += int(input(""))
        c += 1
    except EOFError:
        print("%.1f" %(s/c))
        break
