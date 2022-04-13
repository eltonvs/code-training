#!/usr/bin/python3
# -*- coding: utf-8 -*-

p = ['N', 'L', 'S', 'O']
while True:
    if int(input("")) == 0: break
    print(p[sum([1 if x == 'D' else -1 for x in input("")])%4])
