#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    a = int(input(""))
    if a == 0:
        print("NULL")
    elif a%2 == 0 and a > 0:
        print("EVEN POSITIVE")
    elif a%2 == 0:
        print("EVEN NEGATIVE")
    elif a > 0:
        print("ODD POSITIVE")
    else:
        print("ODD NEGATIVE")
