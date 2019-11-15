#!/usr/bin/python3
"""
island_perimeter - calculate a island perimeter
take a matrix and search the data in 1
"""


def island_perimeter(grid):
    # Create variables for the activity
    y = len(grid)
    x = len(grid[0])
    count = 0

    # Iterate the matrix
    for i in range(y):
        for j in range(x):
            # Grid in position [i][j] is equal to 1
            # get the position and set the flag to True
            if grid[i][j] == 1:
                # ------------------ FOR Y ----------------------------
                # verify if y(i) in the next position are 0 or
                # i are in the last position
                if grid[i + 1][j] == 0 or i == (y - 1):
                    count += 1
                # verify if the previus position are 0 or
                # i are in position 0
                if grid[i - 1][j] == 0 or i == 0:
                    count += 1
                # ------------------ FOR X ----------------------------
                # verify if x(j) in the next position are 0 or
                # j are in the last position
                if grid[i][j + 1] == 0 or j == (x - 1):
                    count += 1
                if grid[i][j - 1] == 0 or j == 0:
                    count += 1
    return count
