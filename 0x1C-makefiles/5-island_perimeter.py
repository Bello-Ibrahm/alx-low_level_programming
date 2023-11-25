#!/usr/bin/python3
"""Module that calculates and returns
the perimeter of an island described in grid."""


def num_water_neighbors(grid, x, y):
    """Returns the number of water neighbors a cell has in a grid."""

    num = 0

    if x <= 0 or not grid[x - 1][y]:
        num += 1
    if y <= 0 or not grid[x][y - 1]:
        num += 1
    if y >= len(grid[x]) - 1 or not grid[x][y + 1]:
        num += 1
    if x >= len(grid) - 1 or not grid[x + 1][y]:
        num += 1

    return num


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += num_water_neighbors(grid, i, j)

    return perimeter
