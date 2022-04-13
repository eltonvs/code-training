#!/usr/bin/python3
# -*- coding: utf-8 -*-

n, bf1, bf2 = int(input("")) - 3, 1, 1

print("0 1 1", end=" ")

for i in range(n):
    at = bf1 + bf2
    bf1, bf2 = bf2, at
    print(at, end=('\n' if i == n -1 else ' '))
