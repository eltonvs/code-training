#!/usr/bin/python3
# -*- coding: utf-8 -*-

for cont in range(int(input(""))):
    f, i, num = [1, 1], 0, int(input(""))

    while num > len(f):
        f.append(f[i] + f[i + 1])
        i += 1

    print("Fib(%i) = %i" %(num, 0 if num == 0 else f[num - 1]))
