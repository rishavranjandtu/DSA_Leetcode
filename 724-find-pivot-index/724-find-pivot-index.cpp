class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<n;i++)
        {
            if(i==0){if(nums[n-1]-nums[0]==0) return 0;}
            else if(i==n-1){if(nums[i-1]==0) return n-1;}
            else
            {
                int suml=nums[i-1];
                int sumr=nums[n-1]-nums[i];
                 if(suml==sumr) return i;
            }
        }
        return -1;
    }
};