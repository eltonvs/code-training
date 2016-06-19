#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    try:
        s = input("")
    except EOFError:
        break
    a = 0
    for c in s:
        if c == ' ':
            print(c, end="")
        elif a == 0:
            print(c.upper(), end="")
            a = 1
        else:
            print(c.lower(), end="")
            a = 0
    print()
