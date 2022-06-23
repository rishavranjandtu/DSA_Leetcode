class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        /*
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            if(target>=matrix[i][0]&&target<=matrix[i][m-1])
            {
                for(int j=0;j<matrix[i].size();j++)
                {
                    if(matrix[i][j]==target) return true;
                }
            }
        }
        return false;
        */
        
        int row=0;
        int col=matrix[0].size()-1;
        
        while(row<=matrix.size()-1&&col>=0)
        {
        if(matrix[row][col]==target) return true;
        else if(target<matrix[row][col]) col--;
        else row++;
        }
        return false;
    }
};