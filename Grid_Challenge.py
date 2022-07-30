#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'gridChallenge' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING_ARRAY grid as parameter.
#

def gridChallenge(grid):
    
    sortedString = [ ]
    for value in grid:
        sortedString.append(sorted(value))
    for i in range(len(sortedString)):
        if i == len(sortedString) - 1:
            break
        for j in range(len(sortedString[i])):
            if sortedString[i][j] <= sortedString[i + 1][j]:
                continue
            else:
                return 'NO'
    return 'YES'
            
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        grid = []

        for _ in range(n):
            grid_item = input()
            grid.append(grid_item)

        result = gridChallenge(grid)

        fptr.write(result + '\n')

    fptr.close()
