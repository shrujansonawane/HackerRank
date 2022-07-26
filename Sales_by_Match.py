#!/bin/python3

import math
import os
import random
import re
import sys


def sockMerchant(n, ar):
    pair=0
    for color in set(ar):
        pair+=ar.count(color)//2
    return pair

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
