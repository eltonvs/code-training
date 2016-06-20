#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    s = sum([int(x) for x in input("").split()])
    if s == 0: break
    print(s)
