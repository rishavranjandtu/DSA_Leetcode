class Solution {
public:
  
void csum(vector<int> candidates,int target, int ind, set<vector<int>>&ans, vector<int>&v)
    {
      //if(ind==candidates.size())
       {
           if(target==0)
           {
               ans.insert(v);
               return;
           }
           
       }
     
     for(int i=ind;i<candidates.size();i++)
     {
          if (i > ind && candidates[i] == candidates[i - 1]) continue;
          if (candidates[i] > target) break;
        if(candidates[i]<=target)
        {
            v.push_back(candidates[i]);
            csum(candidates,target-candidates[i],i+1,ans,v);
            v.pop_back();
        }
     }
          
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        set<vector<int>>ans;
        vector<int> v;
        csum(candidates,target,0,ans,v);
        
        vector<vector<int>> d;
        for(auto x:ans)
        {
            d.push_back(x);
        }
        return d;
    }
};