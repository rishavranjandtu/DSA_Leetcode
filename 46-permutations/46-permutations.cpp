class Solution {
public:
    void perm(vector<int>&a,vector<vector<int>>&ans,vector<int>&nums,vector<int>&freq){
        if(a.size()==nums.size())
        {
            ans.push_back(a);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(freq[i]==0)
            {
                a.push_back(nums[i]);
                freq[i]=1;
                perm(a,ans,nums,freq);
                a.pop_back();
                freq[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> a;
        int n=nums.size();
        vector<int> freq(n,0);
        perm(a,ans,nums,freq);
        return ans;
        
    }
};