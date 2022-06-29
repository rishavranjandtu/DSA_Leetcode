class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long int target) {
         sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>> v;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                long long int new_t=target-nums[i]-nums[j];
                int x=j+1;
                int y=n-1;
                while(x<y)
                {
                    long long int sum=nums[x]+nums[y];
                    if(sum<new_t) x++;
                    else if(sum>new_t) y--;
                    else
                    {
                        v.insert({nums[i],nums[j],nums[x],nums[y]});
                        x++;
                        y--;
                    }
                }
            }
        }
        
        for(auto &x:v)
        {
            ans.push_back(x);
        }
        return ans;
        }
    
};