#!/usr/bin/python3
""" THIS IS A ISLAND PERIMETER CALCULATION """
def island_perimeter(grid):
	"""This is the func. to find perimter of island"""
	perimeter = 0
	if len(grid) == 0:
		return(perimeter)
	for i in range(len(grid)):
		for j in range(len(grid[0])):
			if grid[i][j] == 1:
				perimeter += 4 - ((i > 0 and grid[i-1][j]) + (i < len(grid)-1 and grid[i+1][j]) + (j < len(grid[0])-1 and grid[i][j+1]) + (j > 0 and grid[i][j-1]))
	return perimeter
# Example grid
#grid = []
#grid = [[1, 1, 0, 0], [1, 1, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0]]
#grid = [[0, 1, 0, 0], [1, 1, 1, 0], [0, 1, 0, 0], [1, 1, 0, 0]]
#print(perimeter)

