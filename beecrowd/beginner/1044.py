#!/usr/bin/python3
# -*- coding: utf-8 -*-

a, b = (int(x) for x in input("").split())

print("Sao" if b%a == 0 or a%b == 0 else "Nao sao", "Multiplos")
