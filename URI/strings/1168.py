#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    n, c = input(""), 0
    for i in range(len(n)):
        if n[i] == "1": c += 2
        elif n[i] == "7": c += 3
        elif n[i] == "4": c += 4
        elif n[i] == "2" or n[i] == "3" or n[i] == "5": c += 5
        elif n[i] == "6" or n[i] == "9" or n[i] == "0": c += 6
        else: c += 7
    print(c, "leds")
