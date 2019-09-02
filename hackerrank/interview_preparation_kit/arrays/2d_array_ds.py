#!/bin/python3

import math
import os
import random
import re
import sys

def compute_hourglass(arr, center):
    i, j = center
    matrix = [[-1, -1], [-1, 0], [-1, 1], [0, 0], [1, -1], [1, 0], [1, 1]]
    return sum(arr[i + _i][j + _j] for _i, _j in matrix)

# Complete the hourglassSum function below.
def hourglassSum(arr):
    biggest = float('-inf')
    for i in range(1, 5):
        for j in range(1, 5):
            curr_sum = compute_hourglass(arr, (i, j))
            if curr_sum > biggest:
                biggest = curr_sum

    return biggest

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
