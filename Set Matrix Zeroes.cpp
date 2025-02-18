class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix)
        {
            int rowSize = matrix.size();
            int colSize = matrix[0].size();
            bool m[rowSize];
            bool n[colSize];
            fill(m, m+rowSize, false);
            fill(n, n+colSize, false);
            for(int i=0; i<rowSize; i++)
            {
                for(int j=0; j<colSize; j++)
                {
                    if(matrix[i][j]==0)
                    {
                        m[i]=true;
                        n[j]=true;
                    }
                }
            }
            for(int i=0; i<rowSize; i++)
            {
                for(int j=0; j<colSize; j++)
                {
                    if(m[i]==true || n[j]==true)
                    {
                       matrix[i][j]=0;
                    }
                }
            }
        }
    };