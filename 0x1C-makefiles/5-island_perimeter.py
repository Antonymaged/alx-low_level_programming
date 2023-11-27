#!/usr/bin/python3
"""island perimeter measuring function."""


def island_perimeter(grid):
    """perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    w = len(grid[0])
    h = len(grid)
    edgs = 0
    s = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                s += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edgs += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edgs += 1
    return s * 4 - edgs * 2
