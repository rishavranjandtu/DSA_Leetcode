class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    
        int c=0;
        int maxx=0;
        for(int i=0;i<nums.size();i++)
        {
            nums[i]==1?c++:c=0;
            maxx=max(maxx,c);
        }
        return maxx;
    }
};