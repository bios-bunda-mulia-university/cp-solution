#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'minimumBribes' function below.
#
# The function accepts INTEGER_ARRAY q as parameter.
#

def minimumBribes(q):
    # Write your code here
    bribes = 0
    is_chaotic = False
    for idx, person in enumerate(q):
        if (person - idx - 1) > 2:
            print("Too chaotic")
            return
        
        for fucker in q[max(person-2, 0):idx]:
            if fucker > person - 1:
                bribes += 1
    
    print(bribes)
    
if __name__ == '__main__':
    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        q = list(map(int, input().rstrip().split()))

        minimumBribes(q)
