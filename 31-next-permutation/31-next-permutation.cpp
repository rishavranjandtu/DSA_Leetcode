class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakpoint=-1;
        int next_no;
        int n=nums.size();
        for(int i=n-1;i>=1;i--)
        {
            if(nums[i]>nums[i-1])
            {
                breakpoint=i-1;
                break;
            }
        }
        
        if(breakpoint!=-1)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(nums[j]>nums[breakpoint])
                {
                    next_no=j;
                    break;
                }
            }
           // cout<<breakpoint<<" "<<next_no;
            swap(nums[breakpoint],nums[next_no]);
            reverse(nums.begin()+breakpoint+1,nums.end());
        }
        else
        {
            reverse(nums.begin(),nums.end());
        }
    }
};