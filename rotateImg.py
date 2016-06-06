# Given an image represented by an NxN matrix, write a method to rotate the image by 90 degrees.
# Time Complexity - O(n^2) (2 for loops looping through the entire input matrix for each element)

from copy import deepcopy

def rotateMatrix(matrix, n):
    res = deepcopy(matrix)
    for x in range(0, n):
        for y in range(n-1, -1, -1):
            res[x][n-y-1] = matrix[y][x]
            
    return res
    
matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
print "Original matrix:" + str(matrix)
print "Rotated matrix:" + str(rotateMatrix(matrix, 3))
