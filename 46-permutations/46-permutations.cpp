class Solution {
public:
    void permu(vector<int>& nums,int l,int r,vector<vector<int>>&ans)
    {
        //bc
        if(l==r)
        {
            ans.push_back(nums);
            return;
        }
        
        //rc
        for(int i=l;i<=r;i++)
        {
            swap(nums[l],nums[i]);
            permu(nums,l+1,r,ans);
            swap(nums[l],nums[i]);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        permu(nums,0,nums.size()-1,ans);
        return ans;
    }
};