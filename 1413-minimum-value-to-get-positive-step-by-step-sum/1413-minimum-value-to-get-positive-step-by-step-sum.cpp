class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0;
        int cs;
        int ans=INT_MAX;
        for(auto x:nums)
        {
            sum+=x;
            ans=min(ans,sum);
        }
        return ans>0?1:abs(ans)+1;
    }
};