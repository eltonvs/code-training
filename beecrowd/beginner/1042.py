#!/usr/bin/python3
# -*- coding: utf-8 -*-

l = [int(x) for x in input("").split()]
o = "%i\n%i\n%i" %(l[0], l[1], l[2])
l.sort()

print("%i\n%i\n%i\n\n%s" %(l[0], l[1], l[2], o))
