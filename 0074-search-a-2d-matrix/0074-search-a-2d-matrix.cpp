class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int r=matrix.size()-1;
      int c=matrix[0].size()-1;
      while(r>=0&&c>=0)
      {
        if(target==matrix[r][c]) return true;
        else if(target>matrix[r][c]) return false;
        else if(target<matrix[r][c]&&target<matrix[r][0]) r--;
        else if(target<matrix[r][c]&&target>=matrix[r][0]) c--;
      }
       return false; 
    }
};