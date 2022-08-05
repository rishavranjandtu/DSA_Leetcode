class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> v;
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int x=i+1,y=n-1;
            while(x<y)
            {
                int sum=nums[i]+nums[x]+nums[y];
                if(sum==0)
                {
                    v.insert({nums[i],nums[x],nums[y]});
                    x++;
                    y--;
                }
                else if(sum>0) y--;
                else x++;
            }
        }
        for(auto x:v)
        {
            ans.push_back(x);
        }
        return ans;
    }
};