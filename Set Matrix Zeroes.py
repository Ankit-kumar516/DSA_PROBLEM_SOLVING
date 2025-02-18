class Solution(object):
    def setZeroes(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        rowSize=len(matrix)
        colSize=len(matrix[0])
        m = [False] * rowSize;
        n = [False] * colSize;
        for i in range(rowSize):
            for j in range(colSize):
                if matrix[i][j] == 0:
                    m[i] = True;
                    n[j] = True;

        for i in range(rowSize):
            for j in range(colSize):
                if m[i] or n[j]:
                    matrix[i][j] = 0