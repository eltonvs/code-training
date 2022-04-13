#!/usr/bin/python3
# -*- coding: utf-8 -*-

pos, t = [0, 0], 0
l, c = int(input("")), int(input(""))
for j in range(c):
    for i in input(""):
        if i == ">": pos[0] += 1
        elif i == "<": pos[0] -= 1
        elif i == "v": pos[1] += 1
        elif i == "^": pos[1] -= 1
        elif i == "*": t = 1
print("*" if pos > [0, 0] and pos <= [l, c] and t == 1 else "!")
