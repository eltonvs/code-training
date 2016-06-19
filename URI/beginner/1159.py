#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    s, ini = 0, int(input(""))
    if ini == 0: break
    for i in range(ini, ini + 10):
        if i%2 == 0:
            s += i
    print(s)
