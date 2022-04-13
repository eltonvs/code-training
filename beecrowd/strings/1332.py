#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    s = input("")
    print((1 if len([1 for i in range(3) if s[i] == "one"[i]]) >= 2 else 2) if len(s) == 3 else 3)
