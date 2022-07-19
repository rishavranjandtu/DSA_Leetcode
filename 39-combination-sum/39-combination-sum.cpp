class Solution {
public:
    
    void csum(vector<int> candidates,int target, int ind, vector<vector<int>>&ans, vector<int>&v)
    {
       if(ind==candidates.size())
       {
           if(target==0)
           {
               ans.push_back(v);
           }
           return;
       }
        
        if(candidates[ind]<=target)
        {
            v.push_back(candidates[ind]);
            csum(candidates,target-candidates[ind],ind,ans,v);
            v.pop_back();
        }
      
          csum(candidates,target,ind+1,ans,v);
    }
        
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int> v;
    
        csum(candidates,target,0,ans,v);
        return ans;
    }
};