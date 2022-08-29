class Solution {
public:
    int c(vector<int>&g)
    {
        int l=0;
        int h=g.size()-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(g[mid]>=0) l=mid+1;
            else h=mid-1;
        }
        return g.size()-h-1;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        for(int i=0;i<n;i++)
        {
            count+=c(grid[i]);
        }
        return count;
    }
};