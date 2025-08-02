class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
       vector<pair<int, int>> zeropos;

        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j< m ; j++)
            {
                 if(matrix[i][j] == 0)
                 {
                    zeropos.push_back({i,j});
                 }
            }
        }

        for (int k = 0; k < zeropos.size(); k++)
        {
            int i = zeropos[k].first;
            int j = zeropos[k].second;


             for(int row = 0 ; row < n ; row++)
             {
                matrix[row][j] =0;
             }
             for(int col = 0 ; col < m ; col++)
             {
                matrix[i][col] =0;
             }

        }
    }
};