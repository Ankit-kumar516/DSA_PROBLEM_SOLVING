class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int rowSize = matrix.size();
            int colSize = matrix[0].size();
            for (int i = 0; i<rowSize; i++)
            {
                for (int j = i; j<colSize; j++)
                {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
            for(int i = 0; i<rowSize; i++)
            {
                int x=0, y=colSize-1;
                while(x <= y)
                {
                    swap(matrix[i][x], matrix[i][y]);
                    x++;
                    y--;
                }
            }
        }
    };