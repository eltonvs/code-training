#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    j = input("").split()
    a = sum([int(x) for x in input("").split()])
    print(j[j.index("PAR") - 1] if a%2 == 0 else j[j.index("IMPAR") - 1])
