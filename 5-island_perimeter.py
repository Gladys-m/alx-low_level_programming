#!/usr/bin/python3

"""Defines a function that finds the perimeter of an island"""

def island_perimeter(grid):

    """Return the perimiter of an island.
    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    rows = len(grid)
    columns = len(grid[0])
    perim = 0
    bond = 0

    for i in range(rows):
        for j in range(columns):

            if grid[i][j] == 1:
                perim += 4

                if i != 0 and grid[i-1][j] == 1:
                    bond += 1

                if j != 0 and grid[i][j-1] == 1:
                    bond += 1

    return perim - (bond*2)
