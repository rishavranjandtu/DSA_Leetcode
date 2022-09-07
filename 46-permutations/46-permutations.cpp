class Solution {
public:
    void p(int ind,vector<int>& nums, vector<vector<int>>&ans, vector<int>&v,vector<int>&freq)
    {
        if(ind==nums.size())
        {
            ans.push_back(v);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(freq[i]==0)
            {
                v.push_back(nums[i]);
                freq[i]=1;
                p(ind+1,nums,ans,v,freq);
                freq[i]=0;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> freq(nums.size());
        vector<int>v;
        p(0,nums,ans,v,freq);
        return ans;
    }
};