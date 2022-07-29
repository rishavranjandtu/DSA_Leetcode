class Solution {
public:
    int place(vector<int>& nums,int s, int e)
    {
        int mid;
        while(s<e)
        {
            mid=(s+e)/2;
            if(mid%2==0)
            {
                if(nums[mid]!=nums[mid+1])
                {
                    e=mid;
                }
                else
                {
                    s=mid+1;
                }
            }
            else
            {
                  if(nums[mid]!=nums[mid-1])
                {
                    e=mid;
                }
                else
                {
                    s=mid+1;
                }
            }
        }
        return nums[s];
    }
    
    
    int singleNonDuplicate(vector<int>& nums) {
        return place(nums,0,nums.size()-1);
    }
};