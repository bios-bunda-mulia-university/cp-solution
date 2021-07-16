#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countSwaps' function below.
#
# The function accepts INTEGER_ARRAY a as parameter.
#

def countSwaps(a):
    length = len(a)
    count = 0    
    for idx_i in range(0, length):
        for idx_j in range(idx_i, length-1):
            if a[idx_i] > a[idx_j+1]:
                a[idx_i], a[idx_j+1] = a[idx_j+1], a[idx_i]
                count += 1
    
    print('Array is sorted in %d swaps.' % count)
    print('First Element: %d' % a[0])
    print('Last Element: %d' % a[-1])

if __name__ == '__main__':
    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    countSwaps(a)
