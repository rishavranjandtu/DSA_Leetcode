class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        /*
        int c=1;
        int maxx=0;
        
        if(nums.size()==1&&nums[0]==1) return 1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                if(nums[i]==1)
                {
                    c++;
                }
                else
                {
                    c=0;
                }
            }
            else
            {
                c=1;
            }
            maxx=max(maxx,c);
        }
        return maxx;
        */
        
            
        int c=0;
        int maxx=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1) c++;
            else c=0;
            maxx=max(maxx,c);
        }
        return maxx;
    }
};