#!/usr/bin/python3
"""
island_perimeter - calculate a island perimeter
take a matrix and search the data in 1
"""


def island_perimeter(grid):
    # Create variables for the activity
    y = len(grid)
    x = len(grid[0])
    flag = False
    position_x = 0
    position_y = 0
    count1 = 0
    count2 = 0

    # Iterate the matrix
    for i in range(y):
        for j in range(x):
            # Grid in position [i][j] is equal to 1
            # get the position and set the flag to True
            if grid[i][j] == 1 and flag is False:
                flag = True
                position_x = j
        # Count if grid in position [i][position_x]
        # is equal to 1, it is equal count1++
        if grid[i][position_x - 1] == 0 or position_x == 0:
            count1 += 1
        # verify if grid in position [i][poition_x + 1]
        # is 1, he iterate and count the x part
        if grid[i][position_x + 1] == 1:
            position_y = i
            for k in range(position_x, x):
                if grid[position_y][k] == 1 or position_y == 0:
                    count2 += 1
    print(count1)
    print(count2)
    return count1 + count2
