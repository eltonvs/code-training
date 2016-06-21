#!/usr/bin/python3
# -*- coding: utf-8 -*-

while True:
    n = int(input(""))
    if n == 0: break
    k, m, nl, q = n%2, n/2, 1, n

    for i in range(1, n + 1):
        np, p = 1, 0
        for j in range(n):
            if j == 0: print(" ", end="")
            else: print("  ", end="")
            if p == 0 and np != nl:
                if np < 10: print(" ", end="")
                print(np, end="")
                np += 1
            elif p < q and np == nl:
                if nl < 10: print(" ", end="")
                print(nl, end="")
                p += 1
            else:
                np -= 1
                if np < 10: print(" ", end="")
                print(np, end="")
        if i < m:
            nl, q = nl + 1, q - 2
        elif i == m and k == 1:
            nl, q = nl + 1, 1
        elif i == m and k == 0:
            q = 2
        else:
            nl, q = nl - 1, q + 2
        print()
    print()
