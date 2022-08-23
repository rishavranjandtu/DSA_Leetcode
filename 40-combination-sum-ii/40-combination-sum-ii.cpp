class Solution {
public:
    void comb(int ind,vector<int>& candidates, int target,vector<vector<int>>&ans, vector<int>&a)
    {
        if(target==0)
        {
            ans.push_back(a);
            return ;
        }
        for(int i=ind;i<candidates.size();i++)
        {
            if(i!=ind&&candidates[i]==candidates[i-1]) continue;
            if(target<candidates[i]) break;
            a.push_back(candidates[i]);
            comb(i+1,candidates,target-candidates[i],ans,a);
            a.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> a;
        comb(0,candidates,target,ans,a);
        return ans;
    }
};