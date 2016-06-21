#!/usr/bin/python3
# -*- coding: utf-8 -*-

A, B, C = (int(x) for x in input("").split())

if A > B and B <= C:
    print(":)")
elif A < B and B >= C:
    print(":(")
elif A < B and B < C and (B - A) > (C - B):
    print(":(")
elif A < B and B < C and (B - A) <= (C - B):
    print(":)")
elif A > B and B > C and (A - B)>(B - C):
    print(":)")
elif A > B and B > C and (A - B) <= (B - C):
    print(":(")
elif A == B and B > C:
    print(":(")
elif A == B and C > B:
    print(":)")
else:
    print(":(")
