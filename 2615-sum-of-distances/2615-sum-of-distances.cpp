class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
         unordered_map<int,vector<long long>> mp;
        for(int i=0;i<nums.size();i++) {
            
            int n = mp[nums[i]].size();
            if(n==0){
                mp[nums[i]].push_back(0);
                n++;
            }
            mp[nums[i]].push_back(mp[nums[i]][n-1] + i);
        }
        vector<long long> ans(nums.size(),0);
        for(auto vec:mp){
            vector<long long> &v = vec.second;
            int n = v.size();
            if(n==2) continue;
            for(long long i=1;i<n;i++) {
                long long  ind = v[i] - v[i-1];
                long long leftSum = abs((ind*(i-1)) - v[i-1]);
                long long rightSum = abs((ind*(n-i-1)) - (v[n-1] - v[i]));
                ans[ind] = leftSum + rightSum;
            }
        }
        return ans;
    }
};