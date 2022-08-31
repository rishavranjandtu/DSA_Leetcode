class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int a=-1;
        int l=0;
        int h=nums.size()-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            
            if(nums[mid]==target)
            {
                a=mid;
                h=mid-1;
            }
            else if(target<nums[mid]) h=mid-1;
            else l=mid+1;
        }
        ans.push_back(a);
        l=0;
        h=nums.size()-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            
            if(nums[mid]==target)
            {
                a=mid;
                l=mid+1;
            }
            else if(target<nums[mid]) h=mid-1;
            else l=mid+1; 
        }
        ans.push_back(a);
        return ans;
        
    }
};