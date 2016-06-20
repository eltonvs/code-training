#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    n = int(input(""))
    if n == 0: break
    m = len([x for x in input("").split() if x == '0'])
    print("Mary won", m, "times and John won", n - m, "times")
