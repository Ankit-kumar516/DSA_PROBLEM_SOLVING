class Solution(object):
    def rotate(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        rowSize = len(matrix)
        colSize = len(matrix[0])
        
        # Transpose the matrix
        for i in range(rowSize):
            for j in range(i, colSize):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
        
        # Reverse each row
        for i in range(rowSize):
            x, y = 0, colSize - 1
            while x <= y:
                matrix[i][x], matrix[i][y] = matrix[i][y], matrix[i][x]
                x += 1
                y -= 1
