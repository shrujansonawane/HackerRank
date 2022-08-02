#!/bin/python3

import math
import os
import random
import re
import sys



def sumXor(n):
    result=1
    while n:
        b = n&1
        n >>= 1
        if b == 0:
            result*=2
        
    return result
        
            
    return count
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    result = sumXor(n)

    fptr.write(str(result) + '\n')

    fptr.close()
