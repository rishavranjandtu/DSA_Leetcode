class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int majority1=-1;
        int majority2=-1;
        int count1=0;
        int count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==majority1)  count1++;
            
            else if(nums[i]==majority2)  count2++;
            
            else if(count1==0)
            {
                majority1=nums[i];
                count1++;
            }
            else if(count2==0)
            {
                majority2=nums[i];
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        
        vector<int> ans;
        int c1=0;
        int c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==majority1) c1++;
            else if(nums[i]==majority2) c2++;
        }
        if(c1>nums.size()/3) ans.push_back(majority1);
        if(c2>nums.size()/3) ans.push_back(majority2);
        return ans;
    }
};