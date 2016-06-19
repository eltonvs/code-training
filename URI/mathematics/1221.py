#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    num, c = int(input("")), 0
    if num <= 3:
        print("Prime")
    else:
        for i in range(2, int(pow(num, 1/2)) + 1):
            if num%i == 0:
                c += 1
                break
        print("%sPrime" %("Not " if c == 1 else ""))
