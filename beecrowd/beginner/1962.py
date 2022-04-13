#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    y = 2015 - int(input(""))
    print("%i %s" %((y, "D.C.") if y > 0 else (y*(-1) + 1, "A.C.")))
