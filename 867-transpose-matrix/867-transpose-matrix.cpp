class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int c=matrix.size(), r=matrix[0].size();
        vector<vector<int>> trans(r, vector<int> (c, 0));
        
        //iterate over the matrix and put i, j index value of the given matrix into j,i index of the trans matrix
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
               trans[j][i] = matrix[i][j];
            }
        }
        return trans;
    }
};