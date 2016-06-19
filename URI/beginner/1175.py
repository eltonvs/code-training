#!/usr/bin/python3
# -*- coding: utf-8 -*-

v = []

for i in range(20):
    v.append(int(input("")))

for i in range(20):
    print("N[%i] = %i" %(i, v[19 - i]))
