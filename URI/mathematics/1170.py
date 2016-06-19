#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    s, days = float(input("")), 0
    while s > 1:
        s, days = s/2, days + 1
    print(days, "dias")
