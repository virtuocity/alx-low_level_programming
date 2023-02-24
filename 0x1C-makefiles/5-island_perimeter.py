#!/usr/bin/python3
"""Calculate island perimeter
"""


def island_perimeter(grid):
    """island_perimeter - get perimeter of island in a grid
    Args:
    @grid: grid of 0's and 1's. The 1's represent land and 0 water.
    Return: Perimeter
    """
    if grid is None:
        return (0)
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if i - 1 < 0:
                    perimeter += 1
                else:
                    try:
                        if grid[i - 1][j] == 0 or i - 1 < 0:
                            perimeter += 1
                    except:
                        pass
                if i + 1 > len(grid) - 1:
                    perimeter += 1
                else:
                    try:
                        if grid[i + 1][j] == 0:
                            perimeter += 1
                    except:
                        pass
                if j + 1 > len(grid[i]) - 1:
                    perimeter += 1
                else:
                    try:
                        if grid[i][j + 1] == 0:
                            perimeter += 1
                    except:
                        pass
                try:
                    if grid[i][j- 1] == 0 or j - 1 < 0:
                        perimeter += 1
                except:
                    pass
    return (perimeter)
