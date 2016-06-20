#!/usr/bin/python3
# -*- coding: utf-8 -*-

for i in range(int(input(""))):
    print (" ".join(str(x) for x in sorted(input("").split(), key=len, reverse=True)))
