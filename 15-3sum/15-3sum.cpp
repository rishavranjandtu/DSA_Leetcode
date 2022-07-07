class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>>s;
        for(int i=0;i<nums.size();i++)
        {
            int x=i+1;
            int y=nums.size()-1;
            int t=nums[i];
            
            while(x<y)
            {
                int sum=t+nums[x]+nums[y];
                if(sum<0) x++;
                else if(sum>0) y--;
                else
                {
                    s.insert({nums[i],nums[x],nums[y]});
                    x++;
                    y--;
                }
            }
        }
        
        for(auto &x:s)
        {
            ans.push_back(x);
        }
        return ans;
    }
};