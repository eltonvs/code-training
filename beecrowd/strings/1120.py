#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    ns, (f, t) = [], input("").split()

    if f == '0' and t == '0': break

    for i in t:
        if i != f: ns.append(i)

    ns = 0 if ns == [] else ''.join(ns)

    print(int(ns))
