#!/usr/bin/python3
'''
Module to calculate the perimeter of an island
'''


def island_perimeter(grid):
    '''
    Computes the perimeter of an island
    represented by 0's (water) and 1's (land)
    '''
    if grid is None:
        return 0
    per = 0
    max_row = len(grid)
    max_col = len(grid[0])
    for row in range(max_row):
        for col in range(max_col):
            if grid[row][col] == 1:
                per += 1 if row != 0 and grid[row-1][col] == 0 else 0
                per += 1 if row != max_row - 1 and grid[row+1][col] == 0 else 0
                per += 1 if col != 0 and grid[row][col-1] == 0 else 0
                per += 1 if col != max_col - 1 and grid[row][col+1] == 0 else 0
    return per
